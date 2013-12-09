#include "ficheros.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
Ficheros::Ficheros() : Comunicaciones()
{
     /** Constructor de ficheros2. LLamamos al constructor Comunicaciones() para herencia*/
}
Ficheros::~Ficheros()
{
    //cout << "Destructor de la clase Ficheros" << endl;
}



void Ficheros::sendMessage()
{
    /** Método sendMessage() Escribe en un fichero de texto el mensaje escrito por el nodo*/
    ofstream mensaje("./config/sistema/mensaje.txt",ios::app); /** Abrimos el fichero de mensajes en modo append,
                                                                        para añadir las lineas al final del fichero */
    mensaje << this->_mensaje->str() << endl; /** Volcamos el mensaje del objeto al fichero */
    mensaje.close();                          /** Cerramos el fichero */
}

void Ficheros::receiveMessage(){
    /** Método receiveMessage() Lee de un fichero de texto el mensaje para los nodos */
    ifstream file("./config/sistema/mensaje.txt"); /** Abrimos el fichero en modolectura e introducimos todos los números en un vector */
    string line; /** variable donde almacenaramos las lineas del fichero. */

    while(getline(file, line)){ /** leemos cada una de las lineas del fichero. */
        /** Parseamos cada linea para ir comprobando los comandos. */
        stringstream ss(line); /** Convertimos la linea en un tipo stringstream. */
        double id1,id2,valor;  /** generamos las variables donde introduciremos los comandos.*/
        string accion;
        ss >> id1 >> id2 >> accion;  /** Volcamos los distintos parametros de la linea a las variables */
           if (accion == "escribir") ss >> valor; 
    }
    file.close();               /** Cerramos el fichero de texto*/
}

