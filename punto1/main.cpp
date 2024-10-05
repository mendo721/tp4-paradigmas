#include <iostream>
#include "Cuenta.h"
#include "Cuenta.cpp"

using namespace std;
int main() {
    // Crear dos cuentas
    Cuenta cuenta1(12345, 987654321, 1500.75);
    Cuenta cuenta2(54321, 123456789, 500.50);

    // Mostrar información inicial de las cuentas
    std::cout << "Estado inicial de las cuentas:" << std::endl;
    cuenta1.mostrarInformacion();
    cuenta2.mostrarInformacion();

    // Realizar una transferencia
    cuenta1.transferir(cuenta1, cuenta2, 1000);  // Transferir 1000 de cuenta1 a cuenta2

    // Mostrar información de las cuentas tras la transferencia
    std::cout << "Estado después de la transferencia:" << std::endl;
    cuenta1.mostrarInformacion();
    cuenta2.mostrarInformacion();

    return 0;
}