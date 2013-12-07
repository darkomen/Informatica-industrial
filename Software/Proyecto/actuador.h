#ifndef ACTUADOR_H
#define ACTUADOR_H
#include "nodo.h"

template <class T>
class Actuador : public Nodo
{
public:
    Actuador ():Nodo(){

    }

    Actuador(int ID): Nodo(int ID)
       {
          _id = ID;
          _valor = 0;
       }
    T getValor()
    {
        return _valor;
    }
   void setValor(T valor)
   {
       _valor = valor;
   }
protected:
    T _valor; /** Variable donde se almacena el estado del actuador*/
    /** Atributos */
    //actuTyp _tipo;
};

#endif // ACTUADOR_H
