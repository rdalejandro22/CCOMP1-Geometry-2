#ifndef VECARRAY_H
#define VECARRAY_H
#include "vector.h"
#include "Punto.h"
class VecArray
{
    int tam;
    Vector *pt;
    void resize(int n);
    public:
        VecArray();
        VecArray(Vector vec[], int size);
        VecArray(VecArray &pv);
        ~VecArray();
        void print();
        void pushback(Vector &p);
        void insert(int position, Vector &p);
        void remove(int position);
        void clear();
        int getsize();
};

#endif // VECARRAY_H
