#ifndef LISTANUMEROS_H
#define LISTANUMEROS_H


class ListaNumeros
{
private:
    int contador;
    int* lista;

public:
    int add(int val);
    int get(int index);
    int count();
    ListaNumeros();
};

#endif // LISTANUMEROS_H
