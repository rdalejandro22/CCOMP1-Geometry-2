#include "Array.h"
#include <iostream>
#include "Punto.h"
using namespace std;
void PointArray::resize(int n)
{
    Punto *p = new Punto[n];
    tam = n;
    for(int i=0;i<n;i++)
        p[i]=pt[i];
    delete[] pt;
    pt = p;
}
PointArray::PointArray()
{
    tam = 0;
    pt = new Punto[0];
    cout << "Se creo el arreglo default\n";
}

PointArray::PointArray(Punto points[],int size)
{
    tam = size;
    pt = new Punto[size];
    for(int i=0;i<tam;i++)
        pt[i]= points[i];
    cout << "Se creo el arreglo\n";
}
PointArray::PointArray(PointArray &pv)
{
    tam = pv.tam;
    pt = new Punto[tam];
    for(int i=0;i<tam;i++)
        pt[i] = pv.pt[i];
    cout << "Se creo el arreglo copia\n";
}
PointArray::~PointArray()
{
    delete[] pt;
}
void PointArray::print()
{
    cout << "El arreglo:\n";
    for(int i=0;i<tam;i++)
        pt[i].print();

}
void PointArray::pushback(Punto &p)
{
    resize(tam+1);
    pt[tam-1]=p;
}
void PointArray::insert(int position, Punto &p)
{
    resize(tam+1);
    for(int i=tam;i>position;i--)
        pt[i]=pt[i--];
    pt[position]=p;
}
void PointArray::remove(int position)
{
    for(int i=position+1;i<tam;i++)
        pt[i--]=pt[i];
    resize(tam-1);
}
void PointArray::clear()
{
    resize(0);
    delete[] pt;
}
int PointArray::getsize()
{
    cout<<"El tamanio es: "<<tam<<"\n";
}

