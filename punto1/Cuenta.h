#include <iostream>
#pragma once
using namespace std;

class Cuenta
{
private:
    int numero;
    long dniTitular;
    double saldo; 
public:
    Cuenta(int num, long dni, double salgo);
    bool depositar(double monto);
    bool extraer(double monto);
    double getSaldo();
    void mostrarInformacion();
    void transferir (Cuenta &cuentaOrigen, Cuenta &cuentaDestino, double monto);
};


