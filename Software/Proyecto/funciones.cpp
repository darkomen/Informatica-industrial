#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;
bool file_exists(const std::string& s) {
    //Función para comprobar
    if (access(s.c_str(),0) == 0){
        //cout << "carpeta existe"<< endl;
        return 0;
    }
        else{

        //cout << "carpeta no existe"<<endl;
        return 1;
    }

}
void configuracion(){

    cout << "[+] Generando ficheros del sistema......";
    switch(file_exists("./config")){
    case 0:
        cout << "....[OK]\n[+] Ficheros existentes.\n";
        break;
    case 1:
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

        break;
    default:
        break;
    }

}

/*
int generar_id(){
    int id;
    char cadena[10];
    //generamos el número aleatorio del 1 al 100
    srand(time(NULL));
    id=1+rand()%(101-1);

    //Abrimos el fichero en modo lectura
    ifstream idfile("./config/sistema/id.txt");
    while(!idfile.eof()){
        idfile.getline(cadena,10);

        if (atoi(cadena)==10){
            cout << cadena;
        }

    }
    idfile.close();

}
*/

int generar_id(){
    vector<int> v;
    int id;

    //Abrimos el fichero en modo lectura e introducimos todos los números en un vector
    {
    ifstream file("./config/sistema/id.txt");
    string line;

    while(getline(file, line))
    {
        stringstream ss(line);
        int i;

        while( ss >> i )
           v.push_back(i);
    }
    file.close();
    }

    //Generamos el numero aleatorio del ID
    srand(time(NULL));
    id=1+rand()%(101-1);

    //Lo comprobamos con todos los ID del fichero, si el número es igual que alguno,
    //se vuelve a generar
    for(int j=0;j<v.size();j++){
        if(id==v[j]){
            id=1+rand()%(101-1);
            j=0;
        }
    }

    //Guardamos el Id en el fichero de configuración.
    {
    ofstream file("./config/sistema/id.txt", ios::app);
    file << id<< endl;
    file.close();
    }

    //devolvemos el ID;
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
