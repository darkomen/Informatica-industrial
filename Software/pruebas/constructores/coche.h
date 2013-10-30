#ifndef COCHE_H
#define COCHE_H

#include "rueda.h"

using namespace std;

class Coche
{
public:
    Rueda* r;
    string marca;
    string modelo;
    Coche();
    Coche(Rueda r, string ma, string mo);
    Coche(const Coche &c);
    ~Coche();

    void imprimir();

};

#endif // COCHE_H
