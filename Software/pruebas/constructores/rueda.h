#ifndef RUEDA_H
#define RUEDA_H

#include<iostream>
#include<string>

using namespace std;

class Rueda
{
public:
    string marca;
    int diametro;

    Rueda();
    Rueda(string m, int d);
    Rueda(const Rueda &r);

    void imprimir();
};

#endif // RUEDA_H
