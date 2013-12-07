#ifndef COMUNICACIONES_H
#define COMUNICACIONES_H

//includes
//#include <string>
#include <sstream>

using namespace std;

class Comunicaciones
{
public:
    /**
    Constructor de la clase genera la Id de forma aleatorio y con un mensaje vacio
    */
    Comunicaciones(int ID);

    /**
    Destructor de la clase
    */
    ~Comunicaciones();

    /**
    métodos.
    */
    void createMessage(int id,int id1,string accion,float valor);
    int mostrarId();
protected:
    /**
    Atributos */
    int _id; /** Almacenamos el id del objeto */
    stringstream *_mensaje; /** Almacenamos el mensaje del objeto */
};

#endif // Comunicaciones_H
