#ifndef NODOCENTRAL_H
#define NODOCENTRAL_H
#include <nodo.h>
#include <actuadoranalogico.h>
#include <sensoranalogico.h>
#include <regulador.h>
#include <vector>

#include <iostream>
using namespace std;

class NodoCentral
{
public:
    //void addNodo(const ActuadorAnalogico actAnalog);
    void addActAnalog();    /** Añadimos un actuador analogico*/
    void addSensor();       /** Añadimos un sensor */
    void addRegulador(int index,double setpoint,float p); /** Añadimos un regulador*/
public:
    vector<ActuadorAnalogico> _actAnalog; /** Vector con los actuadores analogicos de la casa*/
    vector<SensorAnalogico> _sensAnalog;  /** Vector con los sensores analogicos de la casa */
    vector<Regulador> _regulador;         /** Vector con los reguladores de la casa */
};

#endif // NODOCENTRAL_H
