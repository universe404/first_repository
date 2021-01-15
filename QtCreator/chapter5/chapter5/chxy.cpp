#include "chxy.h"
#include <QImageReader>
#include <stdio.h>
#include <stdlib.h>
#include <QPainter>
#include <QMatrix>

CHxy::CHxy()
{
}

void CHxy::setImg(QString str)
{
    img = QImage(str);
}
void CHxy::setImg(QPixmap pix)
{
    img = pix.toImage();
}

QImage CHxy::getImg()
{
    return img;
}

QString CHxy::getASCII(int asc)
{
    QString str="";
    QColor color;
    for(int y = 0; y < img.height(); y++){
        for(int x = 0; x < img.width(); x++){
            color = QColor(img.pixel(x,y));
            if(color.red()+color.green()+color.blue()<382)
                str.append(QChar(asc));
            else
                str.append(" ");
        }
        str.append("\n");
    }
    return str;
}

QImage CHxy::gray()
{
    QImage newImage = img;
    QColor oldColor;
    for(int x = 0; x < newImage.width(); x++){
        for(int y = 0; y < newImage.height(); y++){
            oldColor = QColor(img.pixel(x,y));
            //灰度算法
            int average = (oldColor.red()+oldColor.green()+oldColor.blue())/3;
            newImage.setPixel(x,y,qRgb(average,average,average));
        }
    }
    return newImage;
}

QImage CHxy::bright(int num)
{
    QImage newImage = img;
    QColor oldColor;
    for(int x = 0; x < newImage.width(); x++){
        for(int y = 0; y < newImage.height(); y++){
            oldColor = QColor(img.pixel(x,y));
            //亮度算法
            int newR = qBound(0,oldColor.red()+num,255);
            int newG = qBound(0,oldColor.green()+num,255);
            int newB = qBound(0,oldColor.blue()+num,255);
            newImage.setPixel(x,y,qRgb(newR,newG,newB));
        }
    }
    return newImage;
}

QImage CHxy::saturation(int num)
{
    QImage newImage = img;
    QColor oldColor;
    for(int x = 0; x < newImage.width(); x++){
        for(int y = 0; y < newImage.height(); y++){
            oldColor = QColor(img.pixel(x,y));
            //饱和度算法
            QColor newColor = oldColor.toHsl();
            int h = newColor.hue();
            int s = newColor.saturation()+num;
            int l = newColor.lightness();
            s = qBound(0, s, 100);
            newColor.setHsl(h, s, l);
            newImage.setPixel(x, y, qRgb(newColor.red(), newColor.green(), newColor.blue()));
        }
    }
    return newImage;
}

QImage CHxy::blur()
{
    QImage newImage = img;
    QColor oldColor;
    //第一次遍历
    for(int x = 1; x < newImage.width()-1; x++){
        for(int y = 1; y < newImage.height()-1; y++){
            int r = 0;
            int g = 0;
            int b = 0;
            //第二次遍历 遍历九宫格
            for(int i = -1; i<= 1;i++){
                for(int j = -1; j<= 1;j++){
                    oldColor = QColor(img.pixel(x+i, y+j));
                    r += oldColor.red();
                    g += oldColor.green();
                    b += oldColor.blue();
                }
            }
            r = qBound(0, r/9, 255);
            g = qBound(0, g/9, 255);
            b = qBound(0, b/9, 255);
            newImage.setPixel(x,y, qRgb(r,g,b));
        }
    }
    return newImage;
}

QImage CHxy::gaussBlur()
{
    QImage newImage = img;
    int kernel [3][3] = {
    {1,2,1},
    {2,4,2},
    {1,2,1}};
    int sizeKernel = 3;
    int sumKernel = 16;
    QColor color;
    for(int x = sizeKernel/2;x<newImage.width() - sizeKernel/2;x++)
    {
        for(int y= sizeKernel/2;y<newImage.height() - sizeKernel/2;y++)
        {
            int r = 0;
            int g = 0;
            int b = 0;
            for(int i = -sizeKernel/2;i<=sizeKernel/2;i++)
            {
               for(int j = -sizeKernel/2;j<=sizeKernel/2;j++)
               {
                  color = QColor(newImage.pixel(x+i,y+j));
                  r+=color.red()*kernel[sizeKernel/2+i][sizeKernel/2+j];
                  g+=color.green()*kernel[sizeKernel/2+i][sizeKernel/2+j];
                  b+=color.blue()*kernel[sizeKernel/2+i][sizeKernel/2+j];
               }
            }
            r = qBound(0,r/sumKernel,255);
            g = qBound(0,g/sumKernel,255);
            b = qBound(0,b/sumKernel,255);
            newImage.setPixel(x,y,qRgb( r,g,b));
        }
    }
    return newImage;
}


QImage CHxy::sobel()
{
    img = gray();
    QImage newImage = img;
    QColor oldColor;
    int sobelX[3][3] = {
        {-1,0,1},
        {-2,0,2},
        {-1,0,1}
    };
    int sobelY[3][3] = {
        {-1,-2,-1},
        {0,0,0},
        {1,2,1}
    };
    int num = 0;
    for(int y = 1; y < img.height()-1; y++)
    {
        for(int x = 1; x < img.width()-1;x++)
        {
            int r =0;
            int g = 0;
            int b = 0;
            for(int j = -1; j <= 1;j++)
            {
                for(int i = -1; i <= 1;i++)
                {
                       oldColor = QColor(img.pixel(x+i,y+j));
                       num= sobelX[i+1][j+1]+sobelY[i+1][j+1];
                       r += oldColor.red()*num;
                       g += oldColor.green() * num;
                       b += oldColor.blue() * num;
                }
            }
           r = qBound(0,r,255);
           g = qBound(0,g,255);
           b = qBound(0,b,255);
           newImage.setPixel(x,y,qRgb(r,g,b));
        }
    }
    return newImage;
}

QImage CHxy::prewitt()
{
    img = gray();
    QImage newImage = img;
    QColor oldColor;
    int prewitt[3][3] = {
        {-1,0,1},
        {-1,0,1},
        {-1,0,1}
    };
    int num = 0;
    for(int y = 1; y < img.height()-1; y++)
    {
        for(int x = 1; x < img.width()-1;x++)
        {
            int r =0;
            int g = 0;
            int b = 0;
            for(int j = -1; j <= 1;j++)
            {
                for(int i = -1; i <= 1;i++)
                {
                       oldColor = QColor(img.pixel(x+i,y+j));
                       num= prewitt[i+1][j+1];
                       r += oldColor.red()*num;
                       g += oldColor.green() * num;
                       b += oldColor.blue() * num;
                }
            }
           r = qBound(0,r,255);
           g = qBound(0,g,255);
           b = qBound(0,b,255);
           newImage.setPixel(x,y,qRgb(r,g,b));
        }
    }
    return newImage;
}

QImage CHxy::roberts()
{
    img = gray();
    QImage newImage = img;
    QColor oldColor;
    int robertsX[2][2] = {
        {-1,0},
        {0,1}
    };
    int robertsY[2][2] = {
        {0,-1},
        {1,0}
    };
    int num = 0;
    for(int y = 1; y < img.height()-1; y++)
    {
        for(int x = 1; x < img.width()-1;x++)
        {
            int r =0;
            int g = 0;
            int b = 0;
            for(int j = -1; j <= 0;j++)
            {
                for(int i = -1; i <= 0;i++)
                {
                       oldColor = QColor(img.pixel(x+i,y+j));
                       num= robertsX[i+1][j+1]+robertsY[i+1][j+1];
                       r += oldColor.red()*num;
                       g += oldColor.green() * num;
                       b += oldColor.blue() * num;
                }
            }
           r = qBound(0,r,255);
           g = qBound(0,g,255);
           b = qBound(0,b,255);
           newImage.setPixel(x,y,qRgb(r,g,b));
        }
    }
    return newImage;
}

QImage CHxy::addOrg()
{
    double alpha = 0.3;
    QImage grayImage = gray();
    QImage sobelImage = img;
    QImage newImage = img;
    QImage finImage = img;
    QColor grayColor;
    QColor oldColor;
    int sobelX[3][3] = {
        {-1,0,1},
        {-2,0,2},
        {-1,0,1}
    };
    int sobelY[3][3] = {
        {-1,-2,-1},
        {0,0,0},
        {1,2,1}
    };
    int num = 0;
    for(int y = 1; y < grayImage.height()-1; y++)
    {
        for(int x = 1; x < grayImage.width()-1;x++)
        {
            int r =0;
            int g = 0;
            int b = 0;
            for(int j = -1; j <= 1;j++)
            {
                for(int i = -1; i <= 1;i++)
                {
                       grayColor = QColor(grayImage.pixel(x+i,y+j));
                       num= sobelX[i+1][j+1]+sobelY[i+1][j+1];
                       r += grayColor.red()*num;
                       g += grayColor.green()*num;
                       b += grayColor.blue()*num;
                }
            }
           r = qBound(0,r,255);
           g = qBound(0,g,255);
           b = qBound(0,b,255);
           sobelImage.setPixel(x,y,qRgba(r,g,b,alpha));
        }
    }

    for(int x = 0; x < img.width(); x++){
        for(int y = 0; y < img.height(); y++){
            oldColor = QColor(img.pixel(x,y));
            newImage.setPixel(x,y,qRgba(oldColor.red(),oldColor.green(),oldColor.blue(),1-alpha));
        }
    }

    for(int x = 0; x < img.width(); x++){
        for(int y = 0; y < img.height(); y++){
            oldColor = QColor(newImage.pixel(x,y));
            grayColor = QColor(sobelImage.pixel(x,y));
            int r = qBound(0,oldColor.red()+grayColor.red(),255);
            int g = qBound(0,oldColor.green()+grayColor.green(),255);
            int b = qBound(0,oldColor.blue()+grayColor.blue(),255);
            finImage.setPixel(x,y,qRgb(r,g,b));
        }
    }
    return finImage;
}

QImage CHxy::mirrorHor()
{
    return img.mirrored(false, true);;
}

QImage CHxy::mirrorVer()
{
    return img.mirrored(true, false);
}

QImage CHxy::blackwhite()
{
    QImage newImage = img;
    QColor oldColor;
    for(int x = 0; x < newImage.width(); x++){
        for(int y = 0; y < newImage.height(); y++){
            oldColor = QColor(img.pixel(x,y));
            //二值
            int average = (oldColor.red()+oldColor.green()+oldColor.blue())/3;
            if(average>160)
                newImage.setPixel(x,y,qRgb(255,255,255));
            else
                newImage.setPixel(x,y,qRgb(0,0,0));
        }
    }
    return newImage;
}

QImage CHxy::rotateleft()
{
    QMatrix matrix;
    matrix.rotate(-90.0);
    return img.transformed(matrix,Qt::FastTransformation);
}

QImage CHxy::rotaterig()
{
    QMatrix matrix;
    matrix.rotate(90.0);
    return img.transformed(matrix,Qt::FastTransformation);
}

QImage CHxy::mark()
{
    QImage nameImage = QImage("D:/img/hhxy.bmp");
    QImage newImage = img;
    for(int x = 0; x < nameImage.width(); x++){
        for(int y = 0; y < nameImage.height(); y++){
            QColor nameColor = QColor(nameImage.pixel(x,y));
            QColor imgColor = QColor(img.pixel(x,y));
            int nameAvg = (nameColor.red()+nameColor.green()+nameColor.blue())/3;
            int imgAvg = (imgColor.red()+imgColor.green()+imgColor.blue())/3;
            if(nameAvg<=20 && imgAvg>=200)
                newImage.setPixel(x,y,qRgb(0,0,0));
            else if(nameAvg<=20)
                newImage.setPixel(x,y,qRgb(255,255,255));
        }
    }
    return newImage;
}
