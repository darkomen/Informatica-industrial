#include "nodo.h"
#include <iostream>
using namespace std;
Nodo::Nodo()
{

}
Nodo::Nodo(int ID)
{
    ///_id = generar_id();
    _id = ID;
}
Nodo::~Nodo()
{
cout << "Destructor de la clase Nodo" << endl;
}



int Nodo::mostrarId()
{
    return _id;
}

