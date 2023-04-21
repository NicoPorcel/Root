#include <iostream>
#include "Vector.h"
#include "IndiceException.h"

const size_t MAX = 3;

int main() {
    Vector vector(MAX);

    for (size_t i = 0; i < vector.obtenerTamanio(); i++) {
        vector.asignar(i + 1, i);
    }

    vector.mostrar();

    try {
        int n, pos;
        std::cout << "ingrese la posicion : " << std::endl;
        std::cin >> pos;
        n = vector[pos];
        std::cout << n << std::endl;
    }
    catch(IndiceException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}