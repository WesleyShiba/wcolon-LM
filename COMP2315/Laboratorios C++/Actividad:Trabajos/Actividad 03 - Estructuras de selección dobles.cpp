#include <iostream>
using namespace std;

int main() {
    double tiempo_trabajado;

    // Se ingresa la cantidad de años que ha trabajado el empleado en la empresa. 
    cout << "Ingrese la cantidad de años trabajado en la empresa : ";
    cin >> tiempo_trabajado;

    // Se calcula si es elegible para el bono. 
    if (tiempo_trabajado >= 5) {
        cout << "El empleado recibirá el bono de $1000." << endl;
    } else {
        cout << "El empleado no recibirá el bono." << endl;
    }

    return 0;
}