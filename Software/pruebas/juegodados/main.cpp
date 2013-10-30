#include<iostream>
#include "juegodados.h"

int main(int argc, char *argv[])
{

    bool ganarPartida = false;
    juegodados juego;
    int tirada = 0;

    std::cout << "Juego de dados, se gana al sumar 7" << std::endl;

    while (!ganarPartida)
    {
        std::cout << "Tirada " << tirada << std::endl;
        ganarPartida = juego.jugar();
        juego.printValores();
        tirada++;
    }

    std::cout << "Fin de la partida" << std::endl;
}
