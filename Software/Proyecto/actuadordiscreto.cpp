#include "actuadordiscreto.h"
#include <iostream>
using namespace std;

ActuadorDiscreto::ActuadorDiscreto(): Actuador()
{
    _valor = false; /** Por defecto establecemos el actuador como apagado */
}
ActuadorDiscreto::~ActuadorDiscreto()
{
    //cout << "Destructor de la clase ActuadorDiscreto"<<endl;
}

bool ActuadorDiscreto::getValor()
{
        /** Método getvalor() Devolvemos el valor del actuador */
    return this->_valor;
}
void ActuadorDiscreto::setValor(bool estado)
{
    /** Método setvalor() Establecemos el valor del actuador */
    this->_valor = estado;
}
