#include <iostream>
using namespace std;

int main() {
     
    int entradas;
    int miembro;
    double descuento = 0;

    // Se ingresa la cantidad de entradas. 
    cout << "Ingrese la cantidad de entradas : ";
    cin >> entradas;

    // Se ingresa el numero 1 si es miembro, si no es miembro se puede ingresar cualquier character. 
    cout << "Ingrese 1 si es miembro. Si no, ingrese otro numero : ";
    cin >> miembro;

    // Utiliza la estructura de selección anidada para determinar cuanto descuento recibe el cliente.
    if (miembro == 1){
        if (entradas > 5)
        {
            descuento = 15;
        } 
        else 
        {
            descuento = 10;
        }
    } 
    else 
    {
        if (entradas > 10) 
        {
            descuento = 5;
        }
    }

    cout <<" Recibira un descuento con porcentaje de " <<descuento <<endl; 

    return 0;
}