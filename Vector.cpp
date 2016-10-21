#include <iostream>
#include "vector.h"
#include "Punto.h"
using namespace std;
Vector::Vector()
{
    px1 = Punto();
    px2 = Punto();
}
Vector::Vector(Punto p1,Punto p2)
{
    px1 = p1;
    px2 = p2;
}
void Vector::suma(int a, int b)
{
    px1.suma(a,b);
}
void Vector::print()
{
    //cout << "[";
    px1.print();
    //cout << ",";
    px2.print();
    //cout << "]";
}

