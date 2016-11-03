#ifndef POLYGON_H
#define POLYGON_H
#include "Punto.h"
#include "Vector.h"
#include "Array.h"
#include "VecArray.h"
class Polygon
{
protected:
    static int num;
    PointArray pt;
    public:
        Polygon(PointArray &pa);
        Polygon(Punto points[], int size);
};

#endif // POLYGON_H
