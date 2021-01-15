#include "point.h"
#include <iostream>
using namespace std;

Point::Point(double a, double b)
{
    x = a;
    y = b;
}
void Point::Set(double a, double b)
{
    x = a;
    y = b;
}
void Point::Show()
{
    cout << "(" << x << "," << y << ")" << endl;
}
void Point::Add()
{
    x++;
    y++;
}
Point::GetX()
{
    return x;
}
Point::GetY()
{
    return y;
}
