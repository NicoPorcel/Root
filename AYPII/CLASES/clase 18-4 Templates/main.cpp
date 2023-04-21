#include <iostream>
#include "Comparador.h"

// declaro un template 'Tipo' (una variable generica).
template < typename Tipo >
Tipo mayor(Tipo n1, Tipo n2) {
    if(n1 < n2) return n2;
    return n1;
}

int main() {
    std::string palabra1 = "Nico";
    std::string palabra2 = "Abril";
    int x = 3;
    int y = -7;

    //utilizo la funcion 'mayor' indicando el tipo de dato
    std::cout << mayor<int>(x, y) << std::endl;
    std::cout << mayor<std::string>(palabra1, palabra2) << std::endl;
    
    //instancio una clase indicando el tipo de dato
    Comparador<int> compararEnteros;
    std::cout << compararEnteros.esMayor(x, y) << std::endl;
    
    return 0;
}