#include "Heladera.h"

Heladera* reservarMemoria() {
    Heladera* heladera = nullptr;
    heladera = new Heladera;
    heladera->frutas = new Fruta*[MAX_FRUTAS];

    return heladera;
}

void agregarFruta(Heladera* heladera, Fruta fruta) {
    heladera->frutas[heladera->cantidadFrutas] = new Fruta;
    *heladera->frutas[heladera->cantidadFrutas] = fruta;
    heladera->cantidadFrutas++;
}

void liberarMemoria(Heladera* heladera) {
    for(size_t i = 0; i < heladera->cantidadFrutas; i++) {
        delete heladera->frutas[i];
    }
    delete[] heladera->frutas;
    delete heladera;
} 