#ifndef POINT_H
#define POINT_H


class Point
{
private:
    double x,y;

public:
    //构造函数
    Point(double a = 0, double b = 0);
    void Set(double a, double b);
    void Show();
    void Add();
    GetX();
    GetY();
};

#endif // POINT_H
