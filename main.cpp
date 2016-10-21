#include <iostream>
#include "Punto.h"
#include "Vector.h"
class PointArray
{
    int tam;
    Punto *pt;
    public:
        PointArray(const Punto points[], const int size)
        {
            tam = size;
            pt = new Punto[size];
            int i;
            for(i=0;i<size;i++)
                pt[i]= points[i];
        }
        PointArray(PointArray &p)
        {
            pt = new Punto[p.tam]
            int i;
            tam = p.tam;
            for(i=0;i<tam;i++)
                pt[i]= p.pt[i];
        }
        void print()
        {
            int i;
            for(i=0;i<tam;i++)
                pt[i].print();
        }
        void quitar(const int position)
        {
            int i;
            for(i=0;i<position;i++)
               ;
            delete pt[i];
        }
        int getsize()
        {
            return tam;
        }
        void añadirfin(const Punto &p)
        {
            tam = p.tam;
            pt = new Punto[tam];
            for(i=0;i<tam;i++)
                pt[i]
        }
        void clear()
        {
            delete pt;
            tam = 0;
        }
};
int main()
{
    Punto p1(1,2);
    Punto p2(3,4);
    Vector vec1(p1,p2);
    vec1.print();
    vec1.suma(10,10);
    vec1.print();
    Punto lista[5];
    PointArray(lista,4);
    lista.print();

}
