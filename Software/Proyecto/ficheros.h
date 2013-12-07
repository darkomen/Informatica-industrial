#ifndef FICHEROS_H
#define FICHEROS_H

#include "comunicaciones.h"

class Ficheros: public Comunicaciones
{
public:
    /** Constructor de la clase ficheros */
    Ficheros();
    ~Ficheros();
    /** Métodos */
    void sendMessage();
    void receiveMessage(); /** 28-nov-2013 PENDIENTE */
    int mostrarId();
};

#endif // FICHEROS_H
