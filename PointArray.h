#ifndef POINTARRAY_H
#define POINTARRAY_H


class PointArray
{
    int tam;
    Punto *pt;
    public:
        PointArray(const Punto , const int );
        PointArray(PointArray);
        void print();
        void quitar(const int position);
        int getsize();
        void añadirfin(const Punto);
        void clear();

};

#endif // POINTARRAY_H
