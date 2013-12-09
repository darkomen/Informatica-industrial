#ifndef REGULADOR_H
#define REGULADOR_H

#include <sensoranalogico.h>
#include <actuadoranalogico.h>
#include <vector>

class Regulador
{
public:
    /** Constructor de Regulador*/
    Regulador(int Index, double setpoint,float p,
              vector<SensorAnalogico> * vSensors_ptr,
              vector<ActuadorAnalogico> * vActuators_ptr);


    void setSetpoint(double setpoint);  /** Establecemos el setpoint del regulador*/
    void Actualizar();                  /** Actualizamos el estado del regulador */

public:
    int _index;
    float _p;
    double _setpoint;
    vector<SensorAnalogico> * _vSensores_ptr; /** Añadimos el sensor del regulador*/
    vector<ActuadorAnalogico> * _vActuadores_ptr;  /** Añadimos el actuador del regulador*/

};

#endif // REGULADOR_H
