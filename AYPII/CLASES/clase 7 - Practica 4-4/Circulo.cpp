#include "Circulo.h"

#include <iostream>

Circulo::Circulo(double radio, int x, int y):centro(x, y) {
    this->radio = radio;
}

void Circulo::mostrar() {
    std::cout << "Radio: " << this->radio << ", Centro: ";
    this->centro.mostrar();
}