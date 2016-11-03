#include <iostream>
#include "Punto.h"
#include "Vector.h"
#include "Array.h"
#include "VecArray.h"
#include "Polygon.h"
//int main()
{
    Punto p1(1,1);
    Punto p2(2,2);
    Punto p3(3,3);
    Punto p4(4,4);
    Punto p5(5,5);
    Punto p6(6,6);
    Punto p7(7,7);
    Punto p8(8,8);

    /*Vector vec1(p1,p2);
    Vector vec2(p3,p4);
    Vector vec3(p5,p6);
    Vector vec4(p7,p8);
    Vector vecarray[] = {vec1,vec2,vec3};
    VecArray arreglovec(vecarray,3);
    arreglovec.print();
    VecArray veccopia(arreglovec);
    veccopia.print();
    arreglovec.pushback(vec4);
    arreglovec.print();*/

    Punto array[] = {p1,p2};
    PointArray lista(array,2);
    Polygon poli(lista,2);





}
