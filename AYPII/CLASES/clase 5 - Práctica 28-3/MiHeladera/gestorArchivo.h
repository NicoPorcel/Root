#ifndef GESTORARCHIVO_H_INCLUDED
#define GESTORARCHIVO_H_INCLUDED

#include "Heladera.h"
#include <fstream>
#include <string>
using namespace std;

const char ESPACIO = ' ';

void procesarArchivo(Heladera* heladera, string rutaArchivo);
Fruta procesarLinea(string linea);

#endif