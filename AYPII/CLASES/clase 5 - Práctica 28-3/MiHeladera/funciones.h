#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "Heladera.h"
#include <string>
using namespace std;

const int CONSULTAR_CANTIDAD = 1;
const int BUSCAR = 2;
const int ORDENAR = 3;
const int MOSTRAR = 4;
const string UNO = "1";
const string DOS = "2";
const string TRES = "3";
const string CUATRO = "4";
const string CINCO = "5";

void menu(Heladera* heladera);
void mostrarMenu();
bool opcionValida(string opcion);
int totalDeFrutas(Heladera* heladera);
bool buscarFrutaPorNombre(Heladera* heladera);
void ordenarAlfabeticamente(Heladera* heladera);
void mostrarHeladera(Heladera* heladera);

#endif