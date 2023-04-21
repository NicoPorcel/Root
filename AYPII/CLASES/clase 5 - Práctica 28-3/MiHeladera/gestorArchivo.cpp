#include "gestorArchivo.h"

void procesarArchivo(Heladera* heladera, string rutaArchivo) {
    ifstream archivo(rutaArchivo);
    string linea;
    while (getline(archivo, linea)) {
        Fruta fruta = procesarLinea(linea);
        agregarFruta(heladera, fruta);
    } 
    archivo.close();
}

Fruta procesarLinea(string linea) {
    Fruta fruta;
    int i = 0;
    while (linea[i] != ESPACIO) {
        fruta.nombre += linea[i];
        i++;
    }

    string cantidad;
    cantidad += linea[i + 1];

    fruta.cantidad = stoi(cantidad);

    return fruta;

}