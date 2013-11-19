#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void configuracion(){

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

int generar_id(){
    vector<int> v; /** Vector de tipo entero */
    int id;        /** variable donde se almacena el ID generado */

    /** Abrimos el fichero en modo lectura e introducimos todos los números en un vector */
    {
    ifstream file("./config/sistema/id.txt");
    string line;

    while(getline(file, line)) /** Almacenamos la linea actual en la variable de tipo string line */
    {
        stringstream ss(line); /** Instanciamos un objeto de tipo stringstream con el contenido de la linea */
        int i;                 /** de esta manera podemos pasar el string a un int */

        while( ss >> i )       /** Volcamos el valor de la linea ya pasada a INT al vector */
           v.push_back(i);
    }
    file.close();               /** Cerramos el fichero */
    }

    /** Generamos el numero aleatorio del ID */
    srand(time(NULL));
    id=1+rand()%(101-1);

    /** Lo comprobamos con todos los ID del fichero, si el número es igual que alguno,
    se vuelve a generar */
    for(int j=0;j<v.size();j++){
        if(id==v[j]){
            id=1+rand()%(101-1);
            j=0;
        }
    }

    /** Guardamos el Id en el fichero de configuración. */
    {
    ofstream file("./config/sistema/id.txt", ios::app);
    file << id<< endl;
    file.close();
    }

    /** devolvemos el ID */
    return id;

}

void leer(){
    const char delimitador =','; //caracter que separa las distintas ordenes.
    const char fin = ';';        //caracter que termina la linea.
    string primer;
    //Abrimos el fichero en modolectura e introducimos todos los números en un vector
    {
    ifstream file("./config/sistema/mensaje.txt");
    string line;
    while(getline(file, line)){//leemos cada una de las lineas del fichero
        //Parseamos cada linea para ir comprobando los comandos
        //getline(line, primer, ',');
        primer = line.substr(0, line.find(delimitador));
        cout << primer;
    }
    file.close();
    }



}
