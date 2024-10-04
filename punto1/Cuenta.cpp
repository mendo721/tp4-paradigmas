#include <iostream>
#include "Cuenta.h"

Cuenta::Cuenta(int num, long titular, double monto){
    this-> numero = num;
    this-> dniTitular = titular;
    this-> saldo = (monto > 0) ? monto : 0.0;
}

bool Cuenta::depositar(double monto){
    if (monto > 0)
    {
        saldo += monto;
    }
}

bool Cuenta::extraer(double monto){
    if (saldo>=monto && monto > 0)
    {
        saldo -= saldo;
    }
    else
    {
        std::cout <<"Fondos insuficientes o monto invalido." << std::endl; 
    }
}

double Cuenta::getSaldo(){
    return saldo;
}

void Cuenta::mostrarInformacion(){
    std::cout <<"Numero de cuenta: " << numero << std::endl;
    std::cout <<"DNI: " << dniTitular << std::endl;
    std::cout <<"Saldo: " << saldo << std::endl;
}

void Cuenta::transferir(Cuenta &cuentaOrigen, Cuenta &cuentaDestino, double monto){
    if (cuentaOrigen.extraer(monto))
    {
        cuentaDestino.depositar(monto);
        std::cout << "Transferencia exitosa de $" << monto << " de la cuenta " << cuentaOrigen.getSaldo() << " a la cuenta " << cuentaDestino.getSaldo() << std::endl;    
    }
     else {
        std::cout << "No se pudo realizar la transferencia. Verifique los fondos." << std::endl;
    }
}