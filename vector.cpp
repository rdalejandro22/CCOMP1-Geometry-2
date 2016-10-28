#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
 main()
{
    vector<int> v;
    vector<int> prro;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    prro.push_back(5);
    prro.push_back(6);
    prro.push_back(7);
    int suma = 0;
    for (int i = 0;i<v.size();i++)
        suma += v[i];
    cout << "La suma de los elementos es: " << suma;
    v.swap(prro);
    cout << "\n";
    for (int i = 0;i<v.size();i++)
        cout << " " << v[i];

}
