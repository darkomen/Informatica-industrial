#include "nodo.h"
#include <iostream>
using namespace std;
Nodo::Nodo()
{
    /** Constructor de la clase Nodo.*/
    _id = generar_id();
    //_comunicacion = Ficheros;
}
Nodo::~Nodo()
{
    //cout << "Destructor de la clase Nodo" << endl;
}



int Nodo::mostrarId()
{
        /** Método mostrarId() Devolvemos el ID del nodo*/
    return this->_id;
}

