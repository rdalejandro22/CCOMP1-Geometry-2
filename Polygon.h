#ifndef POLYGON_H
#define POLYGON_H
#include "Punto.h"
#include "Array.h"
class Polygon
{
protected:
    static int numPolygons;
    PointArray points;
 public:
    Polygon();
    Polygon(PointArray &pa);
    Polygon(Punto points[],int numPoints);
    virtual double area() = 0;
    int getNumPolygons();
    int getNumSides();
    const PointArray *getPoints() const { return &points ;}
    ~Polygon();
};
#endif // POLYGON_H
class Rectangulo:public Polygon
{
    public:
        Rectangulo(Punto,Punto);
        Rectangulo(int, int, int, int);
        double area();
};
class Triangulo:public Polygon
{
    public:
        Triangulo(Punto,Punto,Punto);
        double area();
};
