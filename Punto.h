#ifndef Punto_h
#define Punto_h
class Punto
{
    int x;
    int y;
public:
    Punto();
    Punto(int , int );
    void print();
    int getX();
    int getY();
    int setX(int );
    int setY(int );
    void suma(int , int );
};

#endif
