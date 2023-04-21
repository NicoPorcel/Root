#include "Punto.h"

#include <iostream>

Punto::Punto(int x, int y) {
    this->x = x;
    this->y = y;
}

void Punto::mostrar() {
    std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}