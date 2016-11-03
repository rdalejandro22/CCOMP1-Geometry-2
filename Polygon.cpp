#include "Polygon.h"
#include "Punto.h"
#include "Vector.h"
#include "Array.h"
#include "VecArray.h"
#include <iostream>
using namespace std;
Polygon::Polygon(PointArray &pa)
{
    pt(pa);
}
Polygon::Polygon(Punto points[], int size)
{
    pt(points,size);
    cout << "Se creo";
}
