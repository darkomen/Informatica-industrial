#ifndef SIMULADOR_H
#define SIMULADOR_H
#include "nodocentral.h"
#include <stdlib.h>

class Simulador
{
public:
    /** COnstructor */
    Simulador(NodoCentral * ssc_ptr);
    ~Simulador();    /** Metodos*/
    void cambiarValorSensor(int index, int min, int max);

private:
    NodoCentral *_ssc_ptr;
    int _valorSim; /** Valor simulado del sensor*/
};

#endif // SIMULADOR_H
