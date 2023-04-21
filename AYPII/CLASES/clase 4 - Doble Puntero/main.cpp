#include <iostream>

using namespace std;

int main() {

    int x = 27;
    int * p1;
    int ** p2;

    p1 = &x;
    *p2 = p1;

    cout << "contenido de x: " << x << endl;
    cout << "direccion de x: "  << &x << endl;
    cout << "contenido de p1 (la direc. de x): "  << p1 << endl;
    cout << "contenido de p2 (la direc. de p1): "  << **p2 << endl;


    return 0;
}