#include <iostream>

using namespace std;

// Declaro un tipo de variable Puntero int
typedef int* pInt;

int main() {

    int x = 8;
    //Imprimo por pantalla la direccion de memoria de 'x'
    cout << (unsigned)&x << endl;

    // Declaro un puntero 'pd' Dinamico
    pInt pd;
    pd = new int;
    *pd = 7;

    cout << *pd << endl;
    
    delete pd;

    return 0;
}