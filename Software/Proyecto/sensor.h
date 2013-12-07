#ifndef SENSOR_H
#define SENSOR_H

#include "nodo.h"

template <class T>
class Sensor : public Nodo
{
public:
    Sensor(int ID): Nodo(int ID)
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


#endif // SENSOR_H
