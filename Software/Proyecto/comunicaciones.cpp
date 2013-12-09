#include "comunicaciones.h"
#include <fstream>
#include <funciones.h>
#include <sstream>
#include <iostream>
using namespace std;

Comunicaciones::Comunicaciones()
{
    /** Constructor por defecto de la clase comunicaciones
    Establecemos el Id de manera aleatorio y el mensaje como vacio*/
    this->_id = generar_id();
    _mensaje = new stringstream("");
}

Comunicaciones::~Comunicaciones()
{
    /** Destructor por defecto de la clase*/
    //cout << "Destructor de la clase Comunicaciones" << endl;

}
/**
  Métodos de la clase

*/
int Comunicaciones::mostrarId()
{
    /** Métdodo mostrarID() Devuelve el ID del objeto */
    return this->_id;
}


void Comunicaciones::createMessage(int id, int id2 ,string accion, float valor){
    /**
    Método createMessage() Genera un string con los parámetros pasados ala función y lo almacena
    en el atributo interno del objeto _mensaje.
    Bibliografía:concatenar un int en un string
    http://www.cplusplus.com/forum/beginner/3405/#msg14120
    http://www.cplusplus.com/reference/fstream/fstream/open/ */
    _mensaje->str(""); /** Eliminamos el mensaje que tengamos */
    *_mensaje << id << " " << id2 << " " << accion<< " "<< valor; /** Concatenamos los parámetros en el string */
}
