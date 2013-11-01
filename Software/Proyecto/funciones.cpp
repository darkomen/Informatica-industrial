#include <stdlib.h>
#include <iostream>
#include <fstream>

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
