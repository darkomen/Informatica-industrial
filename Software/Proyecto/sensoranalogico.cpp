#include "sensoranalogico.h"

#include <iostream>
using namespace std;

SensorAnalogico::SensorAnalogico(): Sensor()
{
    _valor = 0.0; /** Por defecto establecemos el Sensor como apagado */
}
SensorAnalogico::~SensorAnalogico()
{
    //cout << "Destructor de la clase SensorAnalogico"<<endl;
}

float SensorAnalogico::getValor()
{
    /** Método getvalor() Devolvemos el valor del sensor */
    return this->_valor;
}
void SensorAnalogico::setValor(int valor)
{
    /** Método setvalor() Establecemos el valor del sensor de manera aleatorio*/
    if (valor >= 100) valor = 100;
    if (valor <= 0) valor = 0;
    this->_valor = valor;
}
