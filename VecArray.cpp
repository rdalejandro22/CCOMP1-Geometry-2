#include "VecArray.h"
#include "vector.h"
#include "Punto.h"
#include <iostream>
using namespace std;
void VecArray::resize(int n)
{
    Vector *p = new Vector[n];
    tam = n;
    for(int i=0;i<n;i++)
        p[i]=pt[i];
    delete[] pt;
    pt = p;
}
VecArray::VecArray()
{
    tam = 0;
    pt = new Vector[0];
    cout << "Se creo el arreglo de vector default\n";
}

VecArray::VecArray(Vector vec[],int size)
{
    tam = size;
    pt = new Vector[size];
    for(int i=0;i<tam;i++)
        pt[i]= vec[i];
    cout << "Se creo el arreglo vector\n";
}
VecArray::VecArray(VecArray &pv)
{
    tam = pv.tam;
    pt = new Vector[tam];
    for(int i=0;i<tam;i++)
        pt[i] = pv.pt[i];
    cout << "Se creo el arreglo vector copia\n";
}
VecArray::~VecArray()
{
    delete[] pt;
}
void VecArray::print()
{
    cout << "El arreglo vector:\n";
    for(int i=0;i<tam;i++)
        pt[i].print();

}
void VecArray::pushback(Vector &p)
{
    resize(tam+1);
    pt[tam-1]=p;
}
void VecArray::insert(int position, Vector &p)
{
    resize(tam+1);
    for(int i=tam;i>position;i--)
        pt[i]=pt[i--];
    pt[position]=p;
}
void VecArray::remove(int position)
{
    for(int i=position+1;i<tam;i++)
        pt[i--]=pt[i];
    resize(tam-1);
}
void VecArray::clear()
{
    resize(0);
    delete[] pt;
}
int VecArray::getsize()
{
    cout<<"El tamanio vector es: "<<tam<<"\n";
}


