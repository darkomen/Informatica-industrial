#ifndef FICHEROS_H
#define FICHEROS_H

#include <comunicaciones.h>

class Ficheros: public Comunicaciones
{
public:
    /** Constructor de la clase ficheros */
    Ficheros();
    ~Ficheros();
    /** Métodos */
    void sendMessage();     /** Escribimos el mensaje en el fichero de texto*/
    void receiveMessage(); /** Leemos el mensaje en el fichero de texto */

};

#endif // FICHEROS_H
