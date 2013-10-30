#include "listanumeros.h"

ListaNumeros::ListaNumeros()
{
    lista = new int[100];
    contador = 0;
}



int ListaNumeros::add(int val){
    if(contador < 100)
    {
        lista[contador] = val;
        contador ++;
    }
    else
    {
        return -1;
    }
    return 0;
}

int ListaNumeros::get(int index){
    if(index <100)
        return lista[index];
    else
      return -1;
}

int ListaNumeros::count()
{
return contador;
}
