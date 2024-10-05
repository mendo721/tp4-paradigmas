#include <iostream>
#pragma once
#include "Nodo.h"

using namespace std;
const int indefinido = -9999;
class Fila
{
private:
    Nodo *frente;
    Nodo *final;
    int longitud;
public:
    Fila();
    ~Fila();
    bool EsFilaVacia();
    item Frente();
    void Defila();
    void Enfila(item n);
    int Longitud();
    bool Pertenece(item n);
    void FilaVacia();
    void Mostrar();
};