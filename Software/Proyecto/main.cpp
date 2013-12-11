#include <iostream>
//#include <funciones.h>
#include <comunicaciones.h>
#include <nodocentral.h>
#include <nodo.h>
#include <actuador.h>
#include <actuadordiscreto.h>
#include <actuadoranalogico.h>
#include <sensor.h>
#include <sensoranalogico.h>
#include <ficheros.h>
#include <sstream>
#include <stdlib.h>
#include <simulador.h>
using namespace std;

int main(int argc, char *argv[]){
    //configuracion(); /** Llamamos a la funcion configuración dentro de funciones.h*/
    NodoCentral ssc;
    ssc.configuracion();/** Creamos los ficheros necesarios del sistema */
    ssc.addActAnalog(); /** Añadimos un actuador analogico al sistema*/
    ssc.addSensor();    /** Aadimos un sensor analogico al sistema */
    ssc.addRegulador(0,20,3.25); /** Añadimos un regulador con el actuador y sensor en indice 0
                                     estableciendo un setpoint de 50 y un valor de k de 0.25*/
    Simulador eventos(&ssc);
    for(int i=0;i<20;i++){
        eventos.cambiarValorSensor(0,15,25);
        ssc._regulador.at(0).Actualizar();
    }
    return 0;
}




