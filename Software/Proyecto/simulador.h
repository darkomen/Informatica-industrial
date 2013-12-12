#ifndef SIMULADOR_H
#define SIMULADOR_H
/** Código basado en el propuesto por el tutor del proyecto Javier Gonzalez-Quijano*/
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
