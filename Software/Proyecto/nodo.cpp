#include "nodo.h"
#include <iostream>
using namespace std;
Nodo::Nodo() : NodoCentral()
{
    _id = generar_id();
    //_comunicacion = Ficheros;
}
Nodo::~Nodo()
{
cout << "Destructor de la clase Nodo" << endl;
}



int Nodo::mostrarId()
{
    return this->_id;
}

