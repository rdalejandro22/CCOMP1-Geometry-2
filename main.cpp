#include <iostream>
#include "Punto.h"
#include "Vector.h"
#include "Array.h"
#include "VecArray.h"
#include "Polygon.h"
using namespace std;
int main()
{
    Punto p1(1,1);
    Punto p2(2,2);
    Punto p3(3,3);
    Punto p4(4,4);
    Punto p5(5,5);
    Punto p6(6,6);
    Punto p7(7,7);
    Punto p8(8,8);
    Punto a[] = {p1,p2,p3};
    PointArray ah(a,3);
    ah.print();
    ah.insert(1,p4);
    ah.print();
    ah.remove(0);
    ah.print();
    ah.get(0);

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

    Rectangulo rec(p1,p2);
    cout<<rec.area();






}
