#include <iostream>
#include <ctime>
#include <cstdlib>

#include "listanumeros.h"
#define limite 100


using namespace std;

int main(int argc, char *argv[])
{

    ListaNumeros lista;
    int i;
    int valor = 0;
    srand((unsigned)time(NULL));    //Inicializamos semilla para numeros aleatorios
    cout << "La lista contiene " << lista.count() << " numeros" << endl;
    cout << "Generamos " << limite << " numeros aleatorios" << endl;
    while (i<limite)
    {
        valor = rand();
        lista.add(valor%(i+1));
        i++;
    }
    cout << "La lista contiene " << lista.count() << " numeros" << endl;
    for(i=0;i<lista.count();i++)
        cout << lista.get(i) << ", ";

    cout << endl << "FIN DEL PROGRAMA" << endl;
}
