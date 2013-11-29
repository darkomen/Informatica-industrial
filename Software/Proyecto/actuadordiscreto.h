#ifndef ACTUADORDISCRETO_H
#define ACTUADORDISCRETO_H
#include <actuador.h>

class ActuadorDiscreto : public Actuador
{
public:
    /** Constructor por defecto del objeto*/
    ActuadorDiscreto();
    bool getValor(); /** Mostramos el estado del actuador */
    void setValor(bool estado);  /** Ponemos el estado del actuador */
    /** Destructor del objeto */
    ~ActuadorDiscreto();
protected:
    bool _valor; /** Variable de tipo bool donde se almacena el estado del actuador*/
};

#endif // ActuadorDiscreto_H
