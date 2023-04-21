#include "Vector.h"

#include "IndiceException.h"

Vector::Vector() {}

Vector::Vector(size_t tamanio) {
    this->tamanio = tamanio;
    this->vector = new int[tamanio];
}

size_t Vector::obtenerTamanio() {
    return this->tamanio;
}

void Vector::asignar(int valor, size_t indice) {
    vector[indice] = valor;
}

int &Vector::operator[](size_t indice) {
    if(indice < 0 || indice >= tamanio) {
        throw IndiceException("El indice no es valido");
    }
    return vector[indice];
}

void Vector::mostrar() {
    for (size_t i = 0; i < tamanio; i++) {
        std::cout << vector[i] << " | ";
    }
    std::cout << std::endl;
}

Vector::~Vector() {
    if(vector){
        std::cout << "Elimino la memoria del vector" << std::endl;
        delete[] vector;
        vector = nullptr;
    }
}