#include "readings.h"
#include <iostream>
#include <fstream>
#include <new>        // std::nothrow
#include <iomanip>    // std::setprecision
using namespace std;

float* crear_arreglo(int size) {
    if (size <= 0) {
        return nullptr;
    }
    return new float[size];
}

void liberar_arreglo(float*& arr) {
    // Libera memoria reservada y pone el puntero en nullptr.
    delete []arr;
    arr = nullptr;
}

int cargar_desde_archivo(const string& ruta, float* arr, int size) {
    
    // Carga hasta 'size' valores desde archivo de texto en 'arr'.
    // Retorna la cantidad de valores leídos correctamente.
    ifstream Archivo(ruta, ios::in);
    if(!Archivo)
    {
        cout <<"No se leyo el contenido correctamente" <<endl;
    }
    float valor;
    int leidos = 0;
    for(int i = 0; i < size;i++)
    {
        Archivo >> valor;
        arr[i] = valor;
        leidos++;
    }
    return leidos;

}

bool guardar_en_archivo(const std::string& ruta, const float* arr, int size) {

    // Guarda 'size' valores de 'arr' en archivo de texto (uno por línea).
    // Retorna true si se guardó con éxito, false si hubo error.
    // lo que voy a hacer es crear un archivo nuevo, almacenando en el los valores
    //leidos en el arreglo, e incluyendo una ultima datos guardados en archivo size
    ofstream Archivo(ruta + ".txt", ios::out);// creo archivo
    if(!Archivo)
    {
        cout << "No se pudo abrir el archivo" <<endl;
        return false;
    }
    for(int i = 0; i < size;i++)
    {
        Archivo <<  arr[i] << endl;
        if(i == size-1)
        {
            Archivo << "Se agregaron " << size << " archivos"<<endl;
        }
    }
    return true;
    
}

void imprimir(const float* arr, int size) {
    for(int i = 0; i < size;i++)
    {
        cout <<arr[i]<<endl;
    }

}
void imprimirArchivoNuevo(string &ruta, int size)
{
    ifstream Archivo(ruta + ".txt", ios::in);
    float valor;
    if(!Archivo)
    {
        cout << "No se pudo abrir el archivo" <<endl;
    }
    for(int i = 0; i < size;i++)
    {
        Archivo >> valor;
        cout << valor << endl;;
    }
}
