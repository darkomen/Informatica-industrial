#include <iostream>
#include <funciones.h>
#include <comunicaciones.h>
 #include <sstream>

using namespace std;

int main(int argc, char *argv[]){
    configuracion();

    comunicaciones comuni;







    comuni.createMessage(comuni.mostrar_id(),3,"cerral",100);

    return 0;
}




