#include "vector.h"
#include "Punto.h"
using namespace std;
Vector::Vector()
{
    inicio = Punto();
    fin = Punto();
}
Vector::Vector(Punto p1,Punto p2)
{
    inicio = p1;
    fin = p2;
}
void Vector::suma(int a, int b)
{
    inicio.suma(a,b);
    fin.suma(a,b);
}
void Vector::print()
{
    inicio.print();
    fin.print();
}
