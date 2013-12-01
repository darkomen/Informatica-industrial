#ifndef NODOCENTRAL_H
#define NODOCENTRAL_H
#include <nodo.h>
#include <vector>

#include <iostream>
using namespace std;
class Nodo;
class NodoCentral
{
public:
    void addNodo(Nodo n);
    void showNodo();
public:
    vector<Nodo> _nodos;
};

#endif // NODOCENTRAL_H
