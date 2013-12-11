#ifndef NODO_H
#define NODO_H
//#include "nodocentral.h"
#include "ficheros.h"
#include <stdlib.h>
#include <vector>
#include <fstream>
//#include<funciones.h>

class Nodo
{
public:
    Nodo();   /** Constructor de la clase*/
    ~Nodo();
    Ficheros _comunicacion; /**  Atríbuto del tipo comunicaciones */
    int mostrarId();        /** Mostramos el ID del nodo*/
   int  generarId();        /** Generamos el ID del nodo */
protected:
    int _id;                /** Atributo con el ID del nodo*/


};

#endif // NODO_H
