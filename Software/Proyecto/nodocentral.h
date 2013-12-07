#ifndef NODOCENTRAL_H
#define NODOCENTRAL_H

#include "nodo.h"
#include "actuador.h"
#include "sensor.h"
#include <vector>

#include <iostream>
using namespace std;

class NodoCentral
{
public:
    NodoCentral();
    //void addActuador(Actuador<bool> a);
    void showNodo();
    void update(); /** Método para actualizar los actuadores con los valores del sensor.*/
    int generar_id();
public:
    //vector<Nodo> _Vnodos;
    //vector<Actuador<bool> > _Vactuadores;
    //vector<Actuador> Vactuadores;
    //vector<(Sensor<bool>)> Vsensores;

    /**
      Un actuador y un sensor pueden compartir ID, pero actuadores y sensores, deberan tener distintos nodos.
      De este modo se puede acceder al nodo por la posición del vector.
     */

};

#endif // NODOCENTRAL_H
