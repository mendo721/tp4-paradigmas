#include <iostream>
#include "Fila.h"

using namespace std;

Fila::Fila(){
    FilaVacia();
}

Fila::~Fila(){
    while (!EsFilaVacia())
    {
        Defila();
    }
}

bool Fila::EsFilaVacia(){
    return longitud == 0;
}

item Fila::Frente(){
    if (!EsFilaVacia())
    {
        return frente->dato;
    }
    else
    {
        return indefinido;
    }
}

void Fila::Defila(){
    if (!EsFilaVacia()) {
        Nodo *aux = frente;
        frente = frente->siguiente;
        delete aux;
        longitud--;
        if (frente == nullptr) {
            final = nullptr;  // Si la fila queda vacía, también actualizamos final
        }
    }
}

void Fila::Enfila(item num){
    Nodo *nuevoNodo = new Nodo;
    nuevoNodo->dato = num;
    nuevoNodo->siguiente = nullptr;
    if (EsFilaVacia())
    {
        frente = nuevoNodo;
        final = nuevoNodo;
    }
    else
    {
        final->siguiente = nuevoNodo;
        final = nuevoNodo;
    }
    longitud++;
}

bool Fila::Pertenece(item num) {
    Nodo *aux = frente;
    while (aux != nullptr) {
        if (aux->dato == num) {
            return true;
        }
        aux = aux->siguiente;
    }
    return false;
}

int Fila::Longitud(){
    return longitud;
}

void Fila::FilaVacia(){
    frente = nullptr;
    final = nullptr;
    longitud = 0;
}

void Fila::Mostrar(){
    Nodo *aux = frente;
    while (aux != nullptr) {
        cout << "Dato: " << aux->dato << endl;
        aux = aux->siguiente;  // Avanzar el puntero
    }
}