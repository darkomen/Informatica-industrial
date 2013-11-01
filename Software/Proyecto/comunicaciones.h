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
    comunicaciones(int id, string mensaje);
    comunicaciones(const comunicaciones &c);

    //destructor.
    ~comunicaciones();

    //métodos.
    void createMessage(int id,int id1,string accion,float valor);
    void mostrar();
private:
    //Atributos
    int _id;
    string _mensaje;
    stringstream temp;
};

#endif // COMUNICACIONES_H
