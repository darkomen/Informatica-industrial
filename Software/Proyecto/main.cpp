#include <iostream>
#include <funciones.h>
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

using namespace std;

int main(int argc, char *argv[]){
    configuracion(); /** Llamamos a la funcion configuración dentro de funciones.h*/
    /** Instanciación de objetos*/
    cout << "**********INICIO DEL PROGRAMA**********" << endl;
    NodoCentral ssc;
    ssc.addActAnalog();
    ssc.addSensor();
    ssc.addRegulador(0,50,0.25);
    cout << ssc._actAnalog.size() << endl;
    ssc._actAnalog.at(0).setValor(0);
    ssc._sensAnalog.at(0).setValor(80);
    for(int i=0;i<10;i++){
        float temp;
        cout << "valor del sensor: ";
        cin >> temp;
        ssc._sensAnalog.at(0).setValor(temp);
        ssc._regulador.at(0).Actualizar();
        cout << "Valvula abierta un :"  << ssc._actAnalog.at(0).getValor()<< " %" <<endl;
    }
    cout << "el valor de la valvula es: "<<  ssc._actAnalog.at(0).getValor() << endl;

    return 0;
}




