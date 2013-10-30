#include<string>
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

class Texto
{
    string txt;
public:
    Texto() // el constructor por defecto (sin parámetros) es necesario
    {       // para la inicialización del array

        txt ="Hola mundo";
    }

    Texto(string str)
    {
        txt = str;
    }

    void print()
    {
        cout << txt << endl;
    }

};


int main(int argc, char *argv[])
{
   // Texto * vector_cadenas = new Texto[3]();
    Texto * vector_cadenas = new Texto[3]; // son equivalentes
    // Texto * vector_cadenas = new Texto[3]("hola"); // No permitido
    int * vector_enteros = new int [4];

    cout << "Enteros inicializados:" << endl;
    for(int i = 0 ; i < 4 ; i++)
        cout << vector_enteros[i] << ", ";
     cout << endl;

     cout << "Cadenas inicializados:" << endl;
     for(int i = 0 ; i < 3 ; i++) // Qué pasa si el índice se sale del máximo??
        vector_cadenas[i].print();

     for(int i = 0 ; i < 3 ; i++)
         vector_cadenas[i] = Texto("hola de nuevo");

     cout << "Cadenas con valores:" << endl;
     for(int i = 0 ; i < 3 ; i++)
        vector_cadenas[i].print();

    delete [] vector_cadenas; //Siempre liberar memoria
    delete [] vector_enteros;


}
