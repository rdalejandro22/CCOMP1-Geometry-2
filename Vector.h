#ifndef vector_h
#define vector_h
#include "Punto.h"

class Vector
{
    Punto px1;
    Punto px2;
public:
    Vector();
    Vector(Punto ,Punto );
    void suma(int , int );
    void print();
};


#endif
