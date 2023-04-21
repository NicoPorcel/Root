#ifndef FRUTA_H_INCLUDED
#define FRUTA_H_INCLUDED

#include <iostream>
using namespace std;

const int MAX_FRUTAS = 10;

typedef struct {
    string nombre;
    int cantidad = 0;
} Fruta;

typedef struct {
    Fruta** frutas = nullptr;
    size_t cantidadFrutas = 0;
} Heladera;

Heladera* reservarMemoria();
void agregarFruta(Heladera* heladera, Fruta fruta);
void liberarMemoria(Heladera* heladera);

#endif