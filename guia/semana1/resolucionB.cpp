#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;

int main()
{
        // -------------------------------------------------------------------------
    // (B) Proyecto CasaDomotica++ - Parte 1: Sensor de temperatura por puntero
    // -------------------------------------------------------------------------
    // El "sensor" será una variable 'temperaturaActual' y un puntero a ella.
    // TODO:
    // 1) Declarar: int temperaturaActual = 22;
    // 2) Declarar: int* ptrTemp = &temperaturaActual;
    // 3) Mostrar equivalencia: *ptrTemp y temperaturaActual.
    // 4) Modificar el valor a través del puntero: *ptrTemp = 27; y verificar.
    // 5) Leer una nueva temperatura desde consola y asignarla vía *ptrTemp.

    int temperaturaActual = 22;
    int* ptrTemp = &temperaturaActual;

    cout<<"Equivalencia de temperaturaActual es usando *ptrTemp: "<< *ptrTemp << endl;
    cout<<"Equivalencia de *ptrTemp es usando temperaturaActual: " << temperaturaActual << endl;

    //4
    cout <<"Modifico el valor del entero para que temperaturaActual sea 27" << endl;
    *ptrTemp = 27;
    cout << "El valor de temperaturaActual es " << *ptrTemp <<endl;

    //5
    cout << "Por favor ingrese un valor de temperatura" <<endl;
    cin >> *ptrTemp;
    cout << "El valor de temperaturaActual es " << temperaturaActual <<endl;

}