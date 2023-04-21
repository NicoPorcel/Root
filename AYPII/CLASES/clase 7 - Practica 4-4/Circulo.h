#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "Punto.h"

class Circulo {

private:
    double radio;
    Punto centro;

public:
    //CONSTRUCTOR
    //PRE: radio > 0
    Circulo(double radio, int x, int y);
    
    void mostrar();
    float obtenerPerimetro();
    float obtenerArea();
    bool estaDentroDelCirculo(Punto p);

};

#endif