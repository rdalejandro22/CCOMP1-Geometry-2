#include <iostream>
#include "Punto.h"
#include "Array.h"
#include "Polygon.h"
#include <cmath>
#include <math.h>
using namespace std;
int Polygon::numPolygons = 0;
Polygon::Polygon()
{
    Punto a[0];
    PointArray temp(a,0);
    points = temp;
    ++numPolygons;
}
Polygon::Polygon(PointArray &pa)
{
    points = pa;
    ++numPolygons;
}
Polygon::Polygon(Punto pts[], int size)
{
    PointArray temp(pts,size);
    points = temp;
    ++numPolygons;
}
int Polygon::getNumPolygons()
{
    return numPolygons;
}
int Polygon::getNumSides()
{
    return points.getsize();
}
Polygon::~Polygon(){};
Rectangulo::Rectangulo(Punto a, Punto b)
{
    Punto array[2]={a,b};
    PointArray temp(array,2);
    points = temp;
    ++numPolygons;
}
Rectangulo::Rectangulo(int a, int b, int c, int d)
{
    Punto p1(a,b);
    Punto p2(c,d);
    Punto array[2]={p1,p2};
    PointArray temp(array,2);
    points = temp;
    ++numPolygons;
}
double Rectangulo::area()
{
    double base = points.get(0)->getX() - points.get(1)->getX();
    double altura = points.get(0)->getY() - points.get(1)->getY();
    return std::abs(base*altura);
}
Triangulo::Triangulo(Punto p1, Punto p2, Punto p3)
{
    Punto array[3] = {p1,p2,p3};
    PointArray temp(array,3);
    points = temp;
    ++numPolygons;
}
double Triangulo::area()
{
    double d01x = points.get(0)->getX() - points.get(1)->getX();
    double d12x = points.get(1)->getX() - points.get(2)->getX();
    double d20x = points.get(2)->getX() - points.get(0)->getX();
    double d01y = points.get(0)->getY() - points.get(1)->getY();
    double d12y = points.get(1)->getY() - points.get(2)->getY();
    double d20y = points.get(2)->getY() - points.get(0)->getY();
    double a = std::sqrt(d01x*d01x + d01y*d01y);
    double b = std::sqrt(d12x*d12x + d12y*d12y);
    double c = std::sqrt(d20x*d20x + d20y*d20y);
    double s = (a + b + c) / 2;
    return std :: sqrt ( s * (s-a) * (s-b) * (s-c) );
}

