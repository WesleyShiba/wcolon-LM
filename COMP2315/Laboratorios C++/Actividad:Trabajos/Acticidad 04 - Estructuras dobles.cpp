#include <iostream>
using namespace std;

int main() {
    double estado_de_tarjeta;

    // Se ingresa un mumero para identificar si la tarjeta de biblioteca esta activa. 
    cout << "Ingrese el numero 1 si su tarjeta de biblioteca del usuario esta activa, si esta inactiva ingrese cualquier otro numero  : ";
    cin >> estado_de_tarjeta;

    // Se identifica si es elegible para prestamos. 
    if (estado_de_tarjeta == 1) {
        cout << "Usuario puede realizar préstamos ." << endl;
    } else {
        cout << "Usuario no puede realizar préstamos ." << endl;
    }

    return 0;
}