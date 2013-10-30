#include "rueda.h"

Rueda::Rueda()
{
    marca = "";
    diametro = 0;
}

Rueda::Rueda(string m, int d)
{
    marca = m;
    diametro = d;
}

Rueda::Rueda(const Rueda &r)
{
    marca = r.marca;
    diametro = r.diametro;
}

void Rueda::imprimir()
{
    std::cout << "La marca de la rueda es " << marca << " y el diametro " << diametro << std::endl;
}
