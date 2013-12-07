#include <iostream>
#include <funciones.h>
#include <comunicaciones.h>
#include <nodo.h>
#include <nodocentral.h>
#include <actuador.h>
#include <sensor.h>
#include <ficheros.h>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]){
    configuracion(); /** Llamamos a la funcion configuración dentro de funciones.h*/
    /** Instanciación de objetos*/
    cout << "**********INICIO DEL PROGRAMA**********" << endl;
    NodoCentral ssc;
    //Sensor<float> temperatura;
    Actuador<bool> puerta;
    //Actuador<float> valvula;
    puerta.setValor(true);
    cout << puerta.getValor() << endl;



    return 0;
}




