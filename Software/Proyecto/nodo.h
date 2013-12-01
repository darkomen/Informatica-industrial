#ifndef NODO_H
#define NODO_H
#include "nodocentral.h"
#include "ficheros.h"
#include<funciones.h>

class Nodo
{
public:
    Nodo();   /** Constructor de la clase*/
    ~Nodo();
    Ficheros _comunicacion; /**   */
    int mostrarId();

protected:
    int _id;


};

#endif // NODO_H
