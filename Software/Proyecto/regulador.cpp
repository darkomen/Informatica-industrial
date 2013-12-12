#include "regulador.h"

Regulador::Regulador(int Index, double setpoint,float p,
                     vector<SensorAnalogico> * vSensores_ptr,
                     vector<ActuadorAnalogico> * vActuadores_ptr)
{
    /** Constructor de la clase Regulador. Por cada regulación
    se instanciará un objeto.*/
    _index = Index; /** Indicamos la posición en el vector de actuadores y sensores */
    _setpoint = setpoint; /** Setpoint del regulador */
    _vSensores_ptr = vSensores_ptr; /** Puntero con el vector de snesores */
    _vActuadores_ptr = vActuadores_ptr;   /** Puntero con el vector de actuadores */
    _p = p; /** Valor proporcional del regulador */
}
void Regulador::setSetpoint(double setpoint){
    _setpoint = setpoint;   /** Establecemos el punto de consigna de trabajo */
}

void Regulador::Actualizar()
{
    /** Obtenemos el valor del sensor */
    double valorSensor = _vSensores_ptr->at(_index).getValor();
    /** Calculamos el error del sistema */
    double error = _setpoint - valorSensor;

    double controlAction;
    /** el nuevo valor del sensor es la suma del error por el valor proporiconal,
      si el error es negativoes por que hemos superado el setpoin. */
    controlAction = _vActuadores_ptr->at(_index).getValor() + (error*_p);

    //set actuator value
    if (controlAction < 0)  controlAction = 0;/** Si el error es negativo */
    _vActuadores_ptr->at(_index).setValor(controlAction);
    cout << "Actuador abierto un :"  << _vActuadores_ptr->at(_index).getValor()<< " %" <<endl;

}
