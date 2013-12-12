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
    int sptemp; //Variable temporal para almacenar la temperatura.
    //configuracion(); /** Llamamos a la funcion configuración dentro de funciones.h*/
    NodoCentral ssc;
    Ficheros fichero;
    fichero.createMessage(32,32,"abrir",200);
    fichero.sendMessage();
    ssc.configuracion();/** Creamos los ficheros necesarios del sistema */
    ssc.addActAnalog(); /** Añadimos un actuador analogico al sistema*/
    ssc.addSensor();    /** Aadimos un sensor analogico al sistema */

    cout << "Ingrese qué temperatura quiere en la habitación: " << endl;
            cin >> sptemp;

    ssc.addRegulador(0,sptemp,3.25); /** Añadimos un regulador con el actuador y sensor en indice 0
                                     estableciendo un setpoint  y un valor de k de 3.25 */
    Simulador eventos(&ssc);
    cout << "Inicio de control:" << endl;
    for(int i=0;i<19;i++){
        eventos.cambiarValorSensor(0,(sptemp-5),(sptemp+5));
        ssc._regulador.at(0).Actualizar();
    }
    cout << "Fin de control" << endl;
    return 0;
}




