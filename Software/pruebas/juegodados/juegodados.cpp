#include<iostream>
#include "juegodados.h"


juegodados::juegodados()
{
}

bool juegodados::jugar()
{
    dado1.lanzar();
    dado2.lanzar();

    bool ganar = false;
    if(dado1.getValorCara()+dado2.getValorCara()==7)
        ganar = true;

    return ganar;

}

void juegodados::printValores()
{
    std::cout << "Has sacado un " << dado1.getValorCara() << " y un " << dado2.getValorCara() << std::endl;

}
