#ifndef COMUNICACIONES_H
#define COMUNICACIONES_H
//includes
#include <string>
#include <sstream>

using namespace std;

class comunicaciones
    {
public:
    //constructores.
    comunicaciones(); //con parámetros por defecto
    comunicaciones(int id, stringstream mensaje);
    comunicaciones(const comunicaciones &c);

    //destructor.
    ~comunicaciones();

    //métodos.
    //concatenar un int en un string
    //http://www.cplusplus.com/forum/beginner/3405/#msg14120
    void createMessage(int id,int id1,string accion,float valor);
    void mostrar();
private:
    //Atributos
    int _id;
    stringstream _mensaje;
};

#endif // COMUNICACIONES_H
