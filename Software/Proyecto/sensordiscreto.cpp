#include "sensordiscreto.h"

#include <iostream>
using namespace std;

SensorDiscreto::SensorDiscreto(): Sensor()
{
    _valor = false; /** Por defecto establecemos el Sensor como apagado */
}
SensorDiscreto::~SensorDiscreto()
{
    //cout << "Destructor de la clase SensorDiscreto"<<endl;
}

bool SensorDiscreto::getValor()
{
    /** Método getvalor() Devolvemos el valor del sensor */
    return this->_valor;
}
void SensorDiscreto::setValor(bool valor)
{
    /** Método setvalor() Establecemos el valor del actuador */
    this->_valor = valor;
}
