#include "coche.h"

Coche::Coche()
{
    marca = "";
    modelo = "";
    this->r = new Rueda[4];
    for(int i = 0 ; i < 4 ; i++)
    {
        this->r->marca = "";
        this->r->diametro = 0;
    }
}


Coche::Coche(Rueda r, string ma, string mo)
{
    this->r = new Rueda[4];
    for(int i = 0 ; i < 4; i++)
    {
        this->r[i] = Rueda(r);
    }
    marca = ma;
    modelo = mo;
}

Coche::Coche(const Coche &c)
{
   // Coche(c.r[0],c.marca,c.modelo);
    this->r = new Rueda[4];
    for(int i = 0 ; i < 4; i++)
    {
        this->r[i] = c.r[i];
    }
    marca = c.marca;
    modelo = c.modelo;
}

Coche::~Coche()
{
    delete []r;
    cout << "Destructor de coche" << endl;
}

void Coche::imprimir(){
    std::cout << "La marca del coche es " << marca << " y el modelo " << modelo << std::endl;
    for(int i = 0; i < 4; i++)
        r[i].imprimir();

}
