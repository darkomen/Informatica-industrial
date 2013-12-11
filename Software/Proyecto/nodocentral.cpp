#include "nodocentral.h"
#include <iostream>
using namespace std;

void NodoCentral::addActAnalog()
{
    /** Método addActAnalog() Añadirmos un objeto de tipo ActuadorAnalogico al vector*/
    _actAnalog.push_back(ActuadorAnalogico());
}
void NodoCentral::addSensor()
{
    /** Método addSensor() Añadirmos un objeto de tipo SensorAnalogico al vector*/
    _sensAnalog.push_back(SensorAnalogico());
}
void NodoCentral::addRegulador(int index,double setpoint,float p)
{
    /** Método addRegulador() Añadirmos un objeto de tipo Regulador al vector */
    _regulador.push_back(Regulador(index,setpoint,p,&_sensAnalog,&_actAnalog));
}

void NodoCentral::configuracion()
{
    /** Método configuracion() Creamos los ficheros necesarios por el sistema */

    cout << "[+] Generando ficheros del sistema......";

    /** comprobamos si el fichero ./config está generado o no. */
    ifstream file("./config",ios::in | ios::binary);
    /** Si el fichero existe, no me genera los ficheros del sistema, no es la primera vez que se ejecuta*/
    if (file.good()){
        cout << "....[OK]\n[+] Ficheros existentes.\n";
    }
    /** Si no está creado, es la primera vez que se ejecuta. */
    else {

        system("mkdir config");
        cout << "\n   ./config\n";
        system("mkdir ./config/casa");
        cout << "       ./casa\n";
        system("mkdir ./config/casa/sensores");
        cout << "           ./sensores\n";
        system("mkdir ./config/casa/actuadores");
        cout << "           ./actuadores\n";
        system("mkdir ./config/sistema");
        cout << "       ./sistema\n";
        system("touch ./config/sistema/id.txt");
        cout << "           ./sistema/id.txt\n";
        system("touch ./config/sistema/mensaje.txt");
        cout << "           ./sistema/mensaje.txt\n";
    }
}

