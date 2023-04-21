#include "funciones.h"

void menu (Heladera* heladera) {
    string opcion;
    
    mostrarMenu();
    cin >> opcion;
    while (!opcionValida(opcion)) {
        cout << "ERROR -- opcion ingresada invalida!!" << endl;
        mostrarMenu();
        cin >> opcion;
    }

    while (opcion != CINCO)   {    
        switch (stoi(opcion)){
            case CONSULTAR_CANTIDAD:
                cout << endl << endl;
                cout << "Hay un total de " << totalDeFrutas(heladera) << " Frutas en la Heladera." << endl;
                cout << "Cantidad de cada una de las Frutas: " << endl;
                mostrarHeladera(heladera);
                cout << endl << endl;
                break;
            case BUSCAR:
                cout << endl << endl;
                if(!buscarFrutaPorNombre(heladera)) cout << "La Fruta que buscas No esta en la Heladera" << endl;
                cout << endl << endl;
                break;
            case ORDENAR:
                ordenarAlfabeticamente(heladera);
                break;
            case MOSTRAR:
                cout << endl << endl;
                mostrarHeladera(heladera);
                cout << endl << endl;
                break;
            default:
                break;
        }
        if(opcion != CINCO){
            mostrarMenu();
            cin >> opcion;
            while (!opcionValida(opcion)) {
                cout << "ERROR -- opcion ingresada invalida!!" << endl;
                mostrarMenu();
                cin >> opcion;
            }
        }
    }
}

void mostrarMenu() {
    cout << "--------------- MENU --------------" << endl;
    cout << "1 - CONSULTAR CANTIDAD DE FRUTAS " << endl;
    cout << "2 - BUSCAR FRUTA" << endl;
    cout << "3 - ORDENAR FRUTAS ALFABETICAMENTE" << endl; 
    cout << "4 - MOSTRAR FRUTAS" << endl;
    cout << "5 - SALIR" << endl;    
    cout << "-----------------------------------" << endl;
    cout << "Ingrese la opcion deseada --> ";
}

bool opcionValida(string opcion){
    return (opcion == UNO || opcion == DOS || opcion == TRES || opcion == CUATRO || opcion == CINCO);
}

int totalDeFrutas(Heladera* heladera) {
    return heladera->cantidadFrutas;    
}

bool buscarFrutaPorNombre(Heladera* heladera) {
    bool estaEnLaHeladera = false;
    string nombre;
    cout << "Ingresa el nombre de la fruta que buscas: ";
    cin >> nombre;
    size_t i = 0;
    while (i < heladera->cantidadFrutas && !estaEnLaHeladera) {
        if(heladera->frutas[i]->nombre == nombre) estaEnLaHeladera = true;
        else i++;
    }

    if(estaEnLaHeladera){
        cout << "La Fruta que buscas esta en la Heladera: " << endl;
        cout << heladera->frutas[i]->nombre << " cantidad: " << heladera->frutas[i]->cantidad << endl;
    }
    
    return estaEnLaHeladera;
}

void ordenarAlfabeticamente(Heladera* heladera) {
    size_t i, j;
    Fruta frutaAux;
    for (i = 1; i < heladera->cantidadFrutas; i++)
    {
        frutaAux = *heladera->frutas[i];
        j = i - 1;
 
        while (j >= 0 && heladera->frutas[j]->nombre > frutaAux.nombre)
        {
            *heladera->frutas[j + 1] = *heladera->frutas[j];
            j = j - 1;
        }
        *heladera->frutas[j + 1] = frutaAux;
    }
}

void mostrarHeladera(Heladera* heladera) {
    for(size_t i = 0;  i < heladera->cantidadFrutas; i++) {
        cout << "Fruta: " << heladera->frutas[i]->nombre << " - Cantidad: " << heladera->frutas[i]->cantidad << endl;
    }
}