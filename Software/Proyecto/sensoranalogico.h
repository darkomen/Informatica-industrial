#ifndef SENSORANALOGICO_H
#define SENSORANALOGICO_H
#include <sensor.h>
class SensorAnalogico :public Sensor
{
public:
public:
    /** Constructor por defecto del objeto*/
    SensorAnalogico();
    float getValor(); /** Mostramos el estado del actuador */
    void setValor(int valor);  /** Ponemos el estado del actuador */
    /** Destructor del objeto */
    ~SensorAnalogico();
protected:
    int _valor; /** Variable de tipo float donde se almacena el estado del actuador*/
};

#endif // SENSORANALOGICO_H
