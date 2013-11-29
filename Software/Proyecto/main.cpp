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
    ActuadorDiscreto bombilla;
    ActuadorAnalogico valvula;
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
    valvula._comunicacion.createMessage(valvula.mostrarId(),21,);
    return 0;
}




