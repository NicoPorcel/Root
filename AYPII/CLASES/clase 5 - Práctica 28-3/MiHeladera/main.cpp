#include "gestorArchivo.h"
#include "funciones.h"

const string RUTA_ARCHIVO = "frutas.txt";

int main() {
    Heladera* heladera = nullptr;
    
    heladera = reservarMemoria();

    procesarArchivo(heladera, RUTA_ARCHIVO);

    menu(heladera);

    liberarMemoria(heladera);

    return 0;
}