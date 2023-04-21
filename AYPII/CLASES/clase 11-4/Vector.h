#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>

class Vector {
    private:
        int* vector = nullptr;
        size_t tamanio = 0;
    
    public:
        Vector();
        Vector(size_t tamanio);

        size_t obtenerTamanio();
        void asignar(int valor, size_t indice);
        int &operator[](size_t indice);
        void mostrar();
        ~Vector();
};

#endif