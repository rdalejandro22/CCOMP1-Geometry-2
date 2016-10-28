#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Punto.h"

class PointArray
{
    int tam;
    Punto *pt;
    public:
        PointArray(const Punto p[], const int );
        PointArray(PointArray &p);
        void print();
        void quitar(const int position);
        int getsize();
        void añadirfin(const Punto);
        void clear();
        Punto get(const int);
        const Punto get(const int) const;

};

#endif // POINTARRAY_H
