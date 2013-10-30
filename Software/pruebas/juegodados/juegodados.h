#ifndef JUEGODADOS_H
#define JUEGODADOS_H

#include "dado.h"

class juegodados
{
public:
    juegodados();
    bool jugar();
    void printValores();
private:
    dado dado1;
    dado dado2;
};

#endif // JUEGODADOS_H
