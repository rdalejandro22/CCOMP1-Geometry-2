#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> s;
    for (int i=1; i <= 10; i++){
        s.push(i);
        cout << " " << s.top();}
    cout << "\n";
    cout << "El tamanio es: " <<s.size();
}
