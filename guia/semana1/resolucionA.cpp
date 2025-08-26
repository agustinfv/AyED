#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;

int main()
{
        // -------------------------------------------------------------------------
    // (A) Variables y direcciones (calentamiento)
    // -------------------------------------------------------------------------
    // TODO:
    // 1) Declarar: int a=5; float f=3.14f; char c='Z';
    // 2) Imprimir valor y dirección:
    //    cout << "a=" << a << "  &a=" << &a << "\n";
    //    cout << "f=" << f << "  &f=" << &f << "\n";
    //    Para 'c' usar:
    //    cout << "c=" << c << "  &c=" << static_cast<const void*>(&c) << "\n";
    // 3) Escribir en comentarios 2-3 observaciones sobre el patrón de direcciones.

    int a=5; 
    float f=3.14f; 
    char c='Z';


    cout << "a=" << a << "  &a=" << &a << "\n";
    cout << "f=" << f << "  &f=" << &f << "\n";
    cout << "c=" << c << "  &c=" << static_cast<const void*>(&c) << "\n";
}