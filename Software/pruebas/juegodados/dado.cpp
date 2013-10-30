#include "dado.h"
#include <stdlib.h>

dado::dado()
{
    valorCara=-1;
}

void dado::lanzar()
{
    valorCara = ((rand()%6)+1);
}

int dado::getValorCara()
{
    return valorCara;
}
