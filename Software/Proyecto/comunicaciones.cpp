#include "comunicaciones.h"
#include <iostream>
using namespace std;
/*
  Constructores de la clase
  */
comunicaciones::comunicaciones()
{
    this->_id = 3;
    this->_mensaje.str("");
}
comunicaciones::comunicaciones(int id,stringstream mensaje)
{
    this->_id = id;
    this->_mensaje << mensaje;
}
/*
  Destructor de la clase
  */
comunicaciones::~comunicaciones(){
    cout << "destuctor de comunicaciones";
}
/*
  Métodos de la clase

*/

void comunicaciones::createMessage(int id, int id2 ,string accion, float valor){
    _mensaje.str("");
    _mensaje << id << "," << id2 << "," << accion<< ","<< valor << ";";
    this->_mensaje.str() ;
}

void comunicaciones::mostrar(){
    cout << "nodo con id: ";
    cout << this->_id << endl;
    cout << "nodo con mensaje: ";
    cout << this->_mensaje.str() << endl;
}
