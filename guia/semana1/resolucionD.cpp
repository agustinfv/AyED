#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;


int main() 
{
    // -------------------------------------------------------------------------
    // (D) Arreglos estáticos: direcciones y funciones con punteros
    // -------------------------------------------------------------------------
    // 1) Declarar un arreglo fijo: int v[5] = {10,20,30,40,50};
    // 2) Imprimir v[i] y &v[i] en un for (i=0..4) para observar contigüidad.
    //    Sugerencia de línea para dirección:
    //    cout << (void*)(&v[i]) << "\n";
    // 3) Llamar a suma(v,5), promedio(v,5) y (opcional) maximo(v,5) e imprimir.
    //    // TODO: completar implementaciones arriba.
int v[5] = {10,20,30,40,50};
int *ptn;
ptn = v;
for(int i = 0; i < (sizeof(v)/sizeof(v[0])); i++)
{
    //void* ptn = &v[i]; //uso un puntero
    cout << "El valor de v[" << i << "] es " << (ptn+i) << ", ptn[i] " << ptn[i] << ", *(ptn + i) " << *(ptn + i) << " ptn: "<<ptn<<endl;
}

cout <<"El valor de la suma del arreglo es " << suma(ptn,5)<<endl;
cout <<"El valor promedio del arreglo es " << promedio(ptn,5)<<endl;
cout <<"El valor maximo del arreglo es " << maximo(ptn,5)<<endl;

}