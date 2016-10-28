#ifndef vector_h
#define vector_h
#include "Punto.h"
class Vector
{
    Punto inicio;
    Punto fin;
public:
    Vector();
    Vector(Punto ,Punto );
    void suma(int , int );
    void print();
};
#endif
