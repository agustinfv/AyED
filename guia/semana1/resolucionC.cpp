// Example program
#include <iostream>
#include <string>
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

int main()
{
      int a; 
    cout << "Ingresa el primer numero: ";
    cin >> a;
    int b; 
    cout << "Ingresa el segundo numero: ";
    cin >> b;

    int *aPt = &a;
    //int *bPt = &b;
    //swap_por_puntero(aPt,bPt);
    //swap_si_mayor(aPt,bPt);
    //swap_si_menor(aPt,bPt);
    
    //set_si_positivo(aPt,b);
    cout << "El valor de a es: " << a << "\nEl valor de b es: " << b << endl;
    
}