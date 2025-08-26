#include <iostream>
#include <iomanip>
#include <string>
#include "funciones.h"
using namespace std;


void swap_por_puntero(int *a, int *b) {
    // TODO: implementar intercambio clásico usando *a, *b y una variable temporal.
     int tmp = *a;
     *a = *b;
     *b = tmp;
}
void swap_si_mayor(int* p, int* q) {
    // TODO: intercambiar solo si *p > *q.
    if(*p > *q)
    {
        int temp = *p;
        *p = *q;
        *q = temp;
    }
}

void swap_si_menor(int* p, int* q) {
    // TODO (opcional): intercambiar solo si *p < *q.
     if(*p < *q)
    {
        int temp = *p;
        *p = *q;
        *q = temp;
    }
}

void set_si_positivo(int* p, int valor) {
    // TODO (opcional): escribir 'valor' en *p solo si valor > 0.
    if(valor > 0)
    {
        *p = valor;
    }
}

int suma(const int* arr, int n) {
    // TODO: recorrer arr[0..n-1] y acumular.
    int acumulador = 0;
    for(int i = 0; i < n;i++)
    {
        //cout << "acumulador " << arr[i]<<endl;
        acumulador += arr[i];
    }
    return acumulador;
}

double promedio(const int* arr, int n) {
    // TODO: usar suma(...) y devolver (double)suma/n si n>0; si n==0 retornar 0.0.

    double valorSuma = suma(arr,n);
    if(n>0)
    {
        return valorSuma/n;
    }
    return 0.0;
}

int maximo(const int* arr, int n) {
    // TODO (opcional): devolver el mayor valor del arreglo (validar n>0).

    int temp=0;
    if(n>0)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > temp)
            {
                temp = arr[i];
            }
        }
    }
    return temp;
}
