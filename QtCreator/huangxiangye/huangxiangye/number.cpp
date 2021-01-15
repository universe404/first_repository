#include "number.h"
#include <iostream>
using namespace std;

Number::Number(double a){
    n = a;
}
void Number::add(){
    n++;
}
void Number::show(){
    cout << "number:"<< n << endl;
}
