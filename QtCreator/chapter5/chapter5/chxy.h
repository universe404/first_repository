#ifndef CHXY_H
#define CHXY_H
#include <QString>
#include <QImage>
#include <QPixmap>

class CHxy
{
private:
    QString path;
    QImage img;
public:
    CHxy();
    void setImg(QString str);
    void setImg(QPixmap pix);
    QImage getImg();
    QString getASCII(int asc);
    QImage gray();
    QImage bright(int num);
    QImage saturation(int num);
    QImage blur();
    QImage gaussBlur();
    QImage sobel();
    QImage prewitt();
    QImage roberts();
    QImage addOrg();
    QImage mirrorHor();
    QImage mirrorVer();
    QImage blackwhite();
    QImage rotateleft();
    QImage rotaterig();
    QImage mark();
};

#endif // CHXY_H
