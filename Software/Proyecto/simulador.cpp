#include "simulador.h"

Simulador::Simulador(NodoCentral * ssc_ptr)
{
    /** Creamos un puntero con el NodoCentral */
    _ssc_ptr = ssc_ptr;
}
Simulador::~Simulador()
{
    //cout << "Destructor de la clase Simulador"<<endl;

}
void Simulador::cambiarValorSensor(int index, int min, int max)
{
    /** Método cambiarvalorSensor() Modifica el valor del sensor que le indiquemos con un
        numero aleatorio dentro del intervalo introducido */
    _valorSim=min+rand()%((max+1)-min);  /** Generamos el numero aleatorio dentro del rango establecido */
    _ssc_ptr->_sensAnalog.at(index).setValor(_valorSim); /** Cambiamos el valor del sensor indicado */
    cout << "Valor del sensor: " << _ssc_ptr->_sensAnalog.at(index).getValor() << endl; /** Mostramos por pantalla el valor cambiado*/
}
