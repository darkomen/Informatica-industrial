#include <iostream>
#include <funciones.h>
#include <comunicaciones.h>
#include <nodocentral.h>
#include <nodo.h>
#include <actuador.h>
#include <actuadordiscreto.h>
#include <actuadoranalogico.h>
#include <ficheros.h>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]){
    configuracion(); /** Llamamos a la funcion configuración dentro de funciones.h*/
    /** Instanciación de objetos*/
    cout << "**********INICIO DEL PROGRAMA**********" << endl;
    NodoCentral ssc;
    ActuadorDiscreto bombilla;
    ActuadorAnalogico valvula;
    /** Programa */
    cout << "El estado actual de la bombilla es: ";
    cout << bombilla.getValor() <<endl ;
    bombilla.setValor(true);
    cout << "El estado actual de la bombilla es: ";
    cout << bombilla.getValor() <<endl ;
    cout << "El estado actual de la valvula es: ";
    cout << valvula.getValor() <<endl ;
    valvula.setValor(50.0);
    cout << "El estado actual de la valvula es: ";
    cout << valvula.getValor() <<endl ;
    cout << "**********FIN DEL PROGRAMA**********" << endl;
    return 0;
}




