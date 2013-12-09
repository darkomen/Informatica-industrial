#ifndef SENSORDISCRETO_H
#define SENSORDISCRETO_H
#include <sensor.h>
class SensorDiscreto :public Sensor
{

public:
    /** Constructor por defecto del objeto*/
    SensorDiscreto();
    bool getValor(); /** Mostramos el estado del actuador */
    void setValor(bool valor);  /** Ponemos el estado del actuador */
    /** Destructor del objeto */
    ~SensorDiscreto();
protected:
    bool _valor; /** Variable de tipo bool donde se almacena el estado del actuador*/
};

#endif // SENSORDISCRETO_H
