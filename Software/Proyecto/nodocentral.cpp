#include "nodocentral.h"
#include <iostream>
using namespace std;

NodoCentral::NodoCentral(){

}

/*void NodoCentral::addActuador(Actuador a)
{
    //_Vactuadores.push_back(Actuador<bool>(generar_id()));
    //Vnodos.insert(Vnodos.end(),n);
}*/

void NodoCentral::showNodo()
{

}

int NodoCentral::generar_id(){
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
