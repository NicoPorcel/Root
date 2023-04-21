#include <iostream>

using namespace std;

/*

COMPILACION
un cpp: g++ nombre.cpp -o nuevonombre
todos los cpp: g++ *.cpp -o nombre

EJECUCION
./nombre

*/

int main(){
    //Division y Resto
    int x = 8, y = 5;
    
    float cociente = x / y; //devuelve el cociente de la div (real)
    int resto = x % y; //devuelve el resto de la div (entero)

    //POST y PRE incremento
    int u = 5, v;
    
    cout << "- Postincremento" << endl;
    v = u++; //u = 6, v = 5, postincremento: asigna y luego incrementa
    cout << "u = " << u << ", v = " << v << endl;
    
    cout << "- Preincremento" << endl;
    u = 5;
    v = ++u; //u = 6, v = 6, preincremento: incrementa y luego asigna
    cout << "u = " << u << ", v = " << v << endl;

    //Ejemplo SWITCH
    int w;
    cout << "ingrese un numero del 1 al 5: " << endl;
    cin >> w;
    
    switch( w ) {
        case 1: cout << "UNO";
                break;
        case 2: cout << "DOS";
                break;
        case 3: cout << "TRES";
                break;
        case 4: cout << "CUATRO";
                break;
        case 5: cout << "CINCO";
                break;
        //el default NO es obligatorio incluirlo
        default: cout << "Opcion no valida !" << endl;
    }
    //OBS: usar switch solo con enteros (int) o caracteres (char)

    return 0;
}