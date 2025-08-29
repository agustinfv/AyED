#include "sensor.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Tengo un struct Sensor que tenga un nombre (string), valor (flotante) y unidad (string
void imprimir(const Sensor* lista, int n) {
cout <<"Nombre " << " valor " << " unidad"<<endl;
for(int i =0; i < n; i++)
{
    cout << (lista+i)->nombre << " " << (lista+i)->valor << " " << (lista+i)->unidad << endl;
}
}

int cargarDesdeArchivo(const std::string& ruta, Sensor* lista, int n) {

ifstream archivo( ("C:\\Users\\Agustin\\Downloads\\AyED-2025\\AyED\\guia\\semana3\\" + ruta),ios::in);
int cargados=0;
string name;
float value;
string unity;

if(!archivo)
{
    cout << "No se pudo leer el archivo" << endl;
    return 0;
}
for(int i =0; i < n; i++)
{
    archivo >>name >>value >> unity;
    (lista+i)->nombre = name;
    (lista+i)->valor = value;
    (lista+i)->unidad = unity;
    cargados++;
}
    return cargados;
}
