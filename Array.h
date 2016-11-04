#ifndef ARRAY_H
#define ARRAY_H
#include "Punto.h"
class PointArray
{
    int tam;
    Punto *pt;
    void resize(int n);
    public:
        PointArray();
        PointArray(Punto points[], int size);
        PointArray(PointArray &pv);
        ~PointArray();
        void print();
        void pushback(Punto &p);
        void insert(int position, Punto &p);
        void remove(int position);
        void clear();
        int getsize();
        Punto *get(int pos);
};

#endif // ARRAY_H
