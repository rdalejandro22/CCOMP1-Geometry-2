#include <iostream>
#include "Punto.h"
#include "Vector.h"
#include "Array.h"
int main()
{
    Punto p1(1,2);
    Punto p2(3,4);
    Punto p3(1,1);
    Punto p4(4,4);
    Punto p5(5,5);
    Punto p6(6,6);
    Punto p7(7,7);

    /*Vector vec1(p1,p2);
    vec1.print();
    vec1.suma(10,10);8
    vec1.print();*/

    Punto array[] = {p1,p2};
    PointArray lista(array,2);
    lista.print();
    PointArray listacopia(lista);
    listacopia.print();
    PointArray pa2();
    lista.pushback(p3);
    lista.print();
    lista.getsize();
    lista.clear();
    lista.print();
    lista.getsize();
    lista.insert(2,p7);
    lista.print();



}
