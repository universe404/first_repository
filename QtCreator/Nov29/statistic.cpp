#include "statistic.h"
#include "asciifont.h"
#include <nmmintrin.h>
//使用神奇的方式强迫gcc去生成popcnt
#ifndef __WIN32
    #ifndef __clang__
    #pragma GCC target ("popcnt")
    #endif
#endif

statistic::statistic()
{

}
QString statistic::checkImage(QImage* image)
{
    U32 char_columns,char_rows;
    QString result;
    U32 width = image->width(),height = image->height();
    //按照16×8的方式切割。
    char_columns = ((width-1)/8)+1;
    char_rows    = ((height-1)/16)+1;
    //这里现在只能用非常naive的方式实现。
    //如果以后还要继续发展，可能会考虑使用内联sse/avx的方式改进性能。
    //我们测试一下内联SSE xor的效果。
    //看起来不错！
    //fhh觉得测试通过了。
    //大概SSE2能拯救fhh吧233333
    chunk c,c_xor;
    U32 mincount=0x7F,count=0x7F;
    U32 minindex=0;
    //切割图片为8×16的区块并打包。
    for(U32 i=0;i<char_rows;i++) {
        for(U32 j=0;j<char_columns;j++) {
            c.half[0] = c.half[1] = 0;
            for(U8 k=0;k<16;k++) {
                for(U8 l=0;l<8;l++) {
                    if(j*8+l<width&&i*16+k<height)
                        c.characters[k] |= ((~(image->pixel(j*8+l,i*16+k))&0x80))>>l;
                }
            }
            //打包完了，接下来按照顺序去xor！
            for(int it = 0;it<FONTDATAMAX;it++) {
                c_xor.packed = _mm_xor_si128(c.packed,fontdata_8x16[it].packed);
                count =  __builtin_popcountll(c_xor.half[0]);
                                count += __builtin_popcountll(c_xor.half[1]);
                if(count<mincount) {
                    mincount = count;
                    minindex = it;
                }
            }
            result += (char)minindex+0x20;
            mincount=0x7F;
            minindex = 0;
        }
        result += '\n';
    }
    return result;
}
