// Example program
#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;



int main()
{
        // -------------------------------------------------------------------------
    // (C) Paso por puntero: pruebas de swap y variantes
    // -------------------------------------------------------------------------
    // TODO:
    // 1) Implementar swap_por_puntero arriba y probar con:
    //    int x=5, y=9;  swap_por_puntero(&x,&y);
    // 2) Implementar swap_si_mayor y probar casos (p.ej., 10 y 3, luego 2 y 7).
    // 3) (Opcional) swap_si_menor y set_si_positivo.

    int a; 
    cout << "Ingresa el primer numero: "<<endl;
    cin >> a;
    int b; 
    cout << "Ingresa el segundo numero: "<<endl;
    cin >> b;


    int *aPt = &a;
    int *bPt = &b;
    //Objeto o;
    swap_por_puntero(aPt,bPt); //intercambio clasico
    //swap_si_mayor(aPt,bPt);
    //swap_si_menor(aPt,bPt);
    
    //set_si_positivo(aPt,b);
    cout << "El valor de a es: " << a << "\nEl valor de b es: " << b << endl;
    
}