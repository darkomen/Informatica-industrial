#include "comunicaciones.h"
#include <fstream>
#include <funciones.h>
#include <sstream>
#include <iostream>
using namespace std;
/**
  Constructores de la clase
  */

Comunicaciones::Comunicaciones()
{
    this->_id = generar_id();
    this->_mensaje.str("");
}

/**
  Destructor de la clase
  */

Comunicaciones::~Comunicaciones(){
    cout << "Destructor de la clase Comunicaciones" << endl;
}
/**
  Métodos de la clase

*/
int Comunicaciones::mostrarId()
{
    return this->_id;
}


void Comunicaciones::createMessage(int id, int id2 ,string accion, float valor){
    /**
    Método que genera un string con los parámetros pasados ala función y lo almacena
    en el atributo interno del objeto _mensaje.
    Bibliografía:concatenar un int en un string
    http://www.cplusplus.com/forum/beginner/3405/#msg14120
    http://www.cplusplus.com/reference/fstream/fstream/open/ */
    this->_mensaje.str(""); /** Eliminamos el mensaje que tengamos */
    this->_mensaje << id << " " << id2 << " " << accion<< " "<< valor; /** Concatenamos los parámetros en el string */
}
