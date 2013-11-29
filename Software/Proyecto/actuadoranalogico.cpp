#include "actuadoranalogico.h"
#include <iostream>
using namespace std;

ActuadorAnalogico::ActuadorAnalogico(): Actuador()
{
    _valor = 0.0; /** Por defecto establecemos el actuador como apagado */
}
ActuadorAnalogico::~ActuadorAnalogico()
{
    cout << "Destructor de la clase ActuadorAnalogico"<<endl;
}

float ActuadorAnalogico::getValor()
{
    return this->_valor;
}
void ActuadorAnalogico::setValor(float valor)
{
    this->_valor = valor;
}
