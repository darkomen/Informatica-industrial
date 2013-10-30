#include "coche.h"

using namespace std;

int main(int argc, char *argv[])
{
   // Coche c1();
    //Coche c2 = Coche();

    Rueda r1 = Rueda("Michelin", 16);
    Rueda r2 = Rueda(r1);
    Rueda r3 = Rueda("GoodYear", 15);

    Coche c1 = Coche(r1,"Opel", "Corsa");

    Coche c2 = Coche(c1);

    c1.imprimir();
    c2.imprimir();

    c2.marca = "Audi";
    c2.modelo = "A1";
    c2.r[0] = r3;
    c2.r[1] = r3;

    c1.imprimir();
    c2.imprimir();



}
