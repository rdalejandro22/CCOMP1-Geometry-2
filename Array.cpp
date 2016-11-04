#include "Array.h"
#include "Punto.h"
#include <iostream>
using namespace std;
void PointArray::resize(int n)
{
    Punto *p = new Punto[n];
    for(int i=0;i<n;i++)
        p[i]=pt[i];
    delete[] pt;
    tam = n;
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
    cout << "Se creo el arreglo normal\n";
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
    cout << "El arreglo es:\n";
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
        pt[i]=pt[i-1];
    pt[position]=p;
    cout << "Se inserto el punto ";
    p.print();
    cout << "en la posicion " << position << "\n";
}
void PointArray::remove(int position)
{
    for(int i=position;i<tam-1;i++)
        pt[i]=pt[i+1];
    resize(tam-1);
    cout << "Se quito el elemento de la posicion: " << position << "\n";
}
void PointArray::clear()
{
    resize(0);
}
int PointArray::getsize()
{
    return tam;
    cout<<"El tamanio es: "<<tam<<"\n";
}
Punto *PointArray::get(int pos)
{
	for(int i=0; i<pos; i++, pt++)
		;
	return pt;

}

