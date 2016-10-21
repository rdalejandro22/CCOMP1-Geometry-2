#include "PointArray.h"
#include "Punto.h"
#include <iostream>
using namespace std;
PointArray::PointArray(const Punto points[], const int size)
{
    tam = size;
    pt = new Punto[size];
    int i;
    for(i=0;i<size;i++)
        pt[i]= points[i];
    cout<<"se creo el arreglo";

}
PointArray::PointArray(PointArray &p)
{
    int sizee = p.tam;
    pt = new Punto[sizee]
    int i;
    for(i=0;i<tam;i++)
        pt[i]= p.pt[i];
}
PointArray::print()
{
    int i;
    for(i=0;i<tam;i++)
        pt[i].print();
}
PointArray::quitar(const int position)
{
    int i;
            for(i=0;i<position;i++)
               ;
            delete pt[i];
}
PointArray::getsize()
{
    return tam;
}
PointArray::añadirfin(const Punto &p)
{
    tam = p.tam;
            pt = new Punto[tam];
            for(i=0;i<tam;i++)
                pt[i]
}
PointArray::clear()
{
    delete pt;
            tam = 0;
}
