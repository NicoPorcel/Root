/*

const int MAX = 3;
Una funcion recibe 2 vectores de enteros por parametro 
de longitud MAX y devuelve el producto interno.

int productoEscalar(int U[], int V[]);

*/

#include <iostream>

using namespace std;

const int MAX = 3;

int productoEscalar(int U[], int V[]);

int main() {
    int U[MAX] = {1, 2, 3};
    int V[MAX] = {1, 2, 2};

    cout << productoEscalar(U, V) << endl;
    return 0;
}

int productoEscalar(int U[], int V[]){
    int resultado = 0;
    for(int i = 0; i < MAX; i++) {
        resultado += U[i]*V[i];
    }
    return resultado;
}