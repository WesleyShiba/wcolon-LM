#include <iostream>
using namespace std;

int main() {
    int costo;
    float vip;
    
    // Se ingresa los datos necesarios para el programa.
    cout << "Ingrese el costo de la compra: ";
    cin >> costo;
    cout << "Ingrese el numero 1 si es parte del programa VIP. Si no pertenece al programa ingrese 2 : ";
    cin >> vip;
    
    // Se utiliza unos de los operadores lógicos relacionales para identificar si se puede aplicar descuento.
    if (costo >= 150 || vip == 1) 
        
        {
            cout << "Aplica para el descuento especial." << endl;
        } 
        else 
        {
            cout << "No aplica para el descuento especia." << endl;
        }
        return 0;
        }