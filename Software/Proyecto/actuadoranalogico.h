#ifndef ACTUADORANALOGICO_H
#define ACTUADORANALOGICO_H
#include <actuador.h>

class ActuadorAnalogico :public Actuador
{
public:
public:
    /** Constructor por defecto del objeto*/
    ActuadorAnalogico();
    float getValor(); /** Mostramos el estado del actuador */
    void setValor(float valor);  /** Ponemos el estado del actuador */
    /** Destructor del objeto */
    ~ActuadorAnalogico();
protected:
    float _valor; /** Variable de tipo bool donde se almacena el estado del actuador*/
};

#endif // ACTUADORANALOGICO_H
