#include "nodocentral.h"
#include <iostream>
using namespace std;

void NodoCentral::addActAnalog()
{
    /** Método addActAnalog() Añadirmos un objeto de tipo ActuadorAnalogico al vector*/
    _actAnalog.push_back(ActuadorAnalogico());
}
void NodoCentral::addSensor()
{
    /** Método addSensor() Añadirmos un objeto de tipo SensorAnalogico al vector*/
    _sensAnalog.push_back(SensorAnalogico());
}
void NodoCentral::addRegulador(int index,double setpoint,float p)
{
    /** Método addRegulador() Añadirmos un objeto de tipo Regulador al vector */
    _regulador.push_back(Regulador(index,setpoint,p,&_sensAnalog,&_actAnalog));
}
