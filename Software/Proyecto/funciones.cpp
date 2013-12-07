#include "funciones.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

void configuracion(){
    /**
      Genera los id de los nodos, comprueba si el ID ya está generado y lo introduce en un fichero.
      Bibliografia:
      - http://c.conclase.net/curso/?cap=039
      - http://codigoc.org/354-obtener-numeros-aleatorios-en-c-rand-srand
      - http://stackoverflow.com/questions/8116808/read-integers-from-a-text-file-with-c-ifstream/8116843#8116843
    */
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



/** HACER STATIC DONDE SEA. */


void leer(){
    //Abrimos el fichero en modolectura e introducimos todos los números en un vector
    ifstream file("./config/sistema/mensaje.txt");
    string line;

    while(getline(file, line)){//leemos cada una de las lineas del fichero
        //Parseamos cada linea para ir comprobando los comandos
        stringstream ss(line); //Convertimos la linea en un tipo stringstream
        double id1,id2,valor;  //generamos las variables donde introduciremos los comandos
        string accion;
        ss >> id1 >> id2 >> accion >> valor; //Volcamos los distintos parametros de la linea a las variables
        if (id1 == 80) { cout << accion << endl;} //Comparamos las variables con lo que queramos.
    }
    file.close();
}


