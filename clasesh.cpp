#include <cmath>
#include <cstddef>
class Point {
    int x, y;
public :
    Point (int xx =0, int yy =0) {x = xx; y = yy ;}
    int getX ()
    {
        return x;
    }
    int getY ()
    {
        return y;
    }
    void setX(const int a)
    {
        x=a;
    }
    void setY(const int b)
    {
        y=b;
    }
};
class PointArray {
    int size ;
    Point *points ;
    void resize(int newSize)
    {
        Point *pts = new Point[newSize];
        int minSize = ( newSize > size ? size : newSize );
        for (int i = 0; i < minSize ; i++)
            pts[i] = points[i];
        delete[] points ;
        size = newSize ;
        points = pts ;

    }
public :
    PointArray()
    {
        size = 0;
        points = new Point[0];
    }
    PointArray(const Point ptsToCopy[], const int toCopySize)
    {
        size = toCopySize;
        points = new Point[toCopySize];
        for(int i = 0; i < toCopySize ; ++i)
            points[i] = ptsToCopy[i];
    }
    PointArray(const PointArray &other)
    {
        size = other.size;
        points = new Point[size];
        for (int i = 0; i < size ; i++)
            points[i] = other.points [i];
    }
    ~PointArray()
    {
        delete[] points;
    }
    void clear()
    {
        resize(0);
    }
    int getSize()
    {
        return size;
    }
    void push_back(const Point &p)
    {
        resize(size+1);
        points[size-1] = p;
    }
    void insert(const int pos, const Point &p)
    {
        resize(size+1);
        for (int i = size - 1; i > pos; i--)
            points[i] = points[i-1];
        points[pos] = p;
    }
    Point *get(const int pos)
    {
        return pos >= 0 && pos < size ? points + pos : NULL ;
    }
    const Point *get(const int pos) const
    {
        return pos >= 0 && pos < size ? points + pos : NULL ;
    }
};
class Polygon {
protected :
    static int numPolygons ;
    PointArray points ;
public :
    Polygon( const PointArray &pa): points(pa)
    {
        ++numPolygons;
    }
    Polygon(const Point pointArr[], const int numPoints):points(pointArr, numPoints)
    {
        ++numPolygons;
    }
    virtual double area() const = 0;
    static int getNumPolygons()
    {
        return numPolygons;
    }
    int getNumSides()
    {
        return points.getSize();
    }
    const PointArray *getPoints()
    {
        return &points;
    }
    ~Polygon()
    {
        --numPolygons;
    }
    Point constructorPoints [4];
    Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,const Point &p3 , const Point &p4 = Point (0 ,0))
    {
        constructorPoints [0] = p1;
        constructorPoints [1] = p2;
        constructorPoints [2] = p3;
        constructorPoints [3] = p4;
        return constructorPoints ;
    }
};
class Rectangle : public Polygon
{
public:
    Rectangle(Point &ll,  Point &ur):Polygon ( updateConstructorPoints (ll , Point (ll. getX () , ur. getY ()),ur , Point (ur. getX () , ll. getY ())), 4) {}
    Rectangle ( const int a, const int b, const int c, const int d);
    virtual double area ()
    {
        int length = points .get(1)->getY () - points .get (0) ->getY ();
        int width = points .get (2) ->getX () - points .get (1) ->getX ();
        return std :: abs (( double ) length * width );
    }
};
main()
{
    Point p1(1 , 1), p2(4 , 4);
    Rectangle r(p1,p2);
}
dsa
