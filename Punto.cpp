#include "Punto.h"
#include <iostream>
using namespace std;
Punto::Punto()
{
    x=0;
    y=0;
}
Punto::Punto(int a, int b)
{
    x=a;
    y=b;
}
void Punto::print()
{
    cout<< "{" << x << "," << y << "}" << endl;
}
int Punto::getX()
{
    return x;
}
int Punto::getY()
{
    return y;
}
int Punto::setX(int a)
{
    x=a;
}
int Punto::setY(int b)
{
    x=b;
}
void Punto::suma(int a, int b)
{
    x +=a;
    y +=b;
}
