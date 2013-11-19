#include "comunicaciones.h"
#include <iostream>
#include <fstream>
#include <funciones.h>
#include <sstream>
using namespace std;
/*
  Constructores de la clase
  */
comunicaciones::comunicaciones()
{
    this->_id = generar_id();
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
    this->_mensaje.str("");
    this->_mensaje << id << "," << id2 << "," << accion<< ","<< valor << ";";
    this->_mensaje.str();

    ofstream mensaje("./config/sistema/mensaje.txt",std::fstream::app);

    mensaje << this->_mensaje.str() << endl;

    mensaje.close();


}

int comunicaciones::mostrar_id(){
    return this->_id ;
}
string comunicaciones::mostrar_mensaje(){

    return this->_mensaje.str();
}
