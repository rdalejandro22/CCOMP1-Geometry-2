#include <cstdlib>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    /*queue<int> s;
    s.push(1);
    s.push(5);
    s.push(9);
    s.push(3);
    while (! s.empty() )
    {
        cout << s.front() << " " ;
        s.pop();
    }*/
    priority_queue<int> p;

  // insertar elementos
    p.push(100);
    p.push(35);
    p.push(12);
    p.push(200);

  // mostrar elementos
    while (! p.empty() )
    {
        cout << p.top() << " " ;
        p.pop();
    }
    cout << endl;

}
