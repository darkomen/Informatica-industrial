#include "comunicaciones.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

Comunicaciones::Comunicaciones()
{
    /** Constructor por defecto de la clase comunicaciones
    Establecemos el Id de manera aleatorio y el mensaje como vacio*/
    this->_id = generarId();
    _mensaje = new stringstream("");
}

Comunicaciones::~Comunicaciones()
{
    /** Destructor por defecto de la clase*/
    //cout << "Destructor de la clase Comunicaciones" << endl;

}
/**
  Métodos de la clase

*/
int Comunicaciones::mostrarId()
{
    /** Métdodo mostrarID() Devuelve el ID del objeto */
    return this->_id;
}

int Comunicaciones::generarId(){
    /** Método generarID Generamos un ID de forma aleatoria y lo almacenamos en un fichero*/
    /**
      Genera los id de los nodos, comprueba si el ID ya está generado y lo introduce en un fichero.
      Bibliografia:
      - http://c.conclase.net/curso/?cap=039
      - http://codigoc.org/354-obtener-numeros-aleatorios-en-c-rand-srand
      - http://stackoverflow.com/questions/8116808/read-integers-from-a-text-file-with-c-ifstream/8116843#8116843
    */
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
        if(id==v[j])
        {
            id=1+rand()%(101-1);
            j=0;
        }
    }

    /** Guardamos el Id en el fichero de configuración. */
    {
    ofstream file("./config/sistema/id.txt", ios::app);
    file << id << endl;
    file.close();
    }

    /** devolvemos el ID */
    return id;

}
void Comunicaciones::createMessage(int id, int id2 ,string accion, float valor){
    /**
    Método createMessage() Genera un string con los parámetros pasados ala función y lo almacena
    en el atributo interno del objeto _mensaje.
    Bibliografía:concatenar un int en un string
    http://www.cplusplus.com/forum/beginner/3405/#msg14120
    http://www.cplusplus.com/reference/fstream/fstream/open/ */
    _mensaje->str(""); /** Eliminamos el mensaje que tengamos */
    *_mensaje << id << " " << id2 << " " << accion<< " "<< valor; /** Concatenamos los parámetros en el string */
}
