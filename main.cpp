#include <iostream>
#include "Punto.h"
#include "Vector.h"
#include "PointArray.h"

int main()
{
    Punto p1(1,2);
    Punto p2(3,4);
    Vector vec1(p1,p2);
    vec1.print();
    vec1.suma(10,10);
    vec1.print();
    Punto lista[5];
    PointArray(lista,4);
    lista.print();

}
