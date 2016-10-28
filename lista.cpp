#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <list>
using namespace std;
main()
{
    list <int> n;
    n.push_back(1);
    n.push_back(4);
    n.push_back(6);
    n.push_back(7);
    n.push_back(3);
    n.push_back(5);
    n.push_back(2);
    cout << "El tamanio es: " << n.size();
    cout << "\n";
    n.sort();
    int a = n.size();
    for (int i=0;i<a;i++){
        cout << " " << n.front();
        n.pop_front();}


}

