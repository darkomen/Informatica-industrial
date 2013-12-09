#include "actuadoranalogico.h"
#include <iostream>
using namespace std;

ActuadorAnalogico::ActuadorAnalogico(): Actuador()
{
    /** Constructor de la clase ActuadorAnalogico*/
    _valor = 0.0; /** Por defecto establecemos el actuador como apagado */
}
ActuadorAnalogico::~ActuadorAnalogico()
{
    //cout << "Destructor de la clase ActuadorAnalogico"<<endl;
}

float ActuadorAnalogico::getValor()
{
    /** Método getvalor() Devolvemos el valor del actuador */
    return this->_valor;
}
void ActuadorAnalogico::setValor(float valor)
{
    /** Método setvalor() Establecemos el valor del actuador */
    this->_valor = valor;
}
