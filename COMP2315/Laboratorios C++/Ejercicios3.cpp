#include <iostream>
using namespace std;

int main() 
{
    //Definicion de variables
    double nacimiento, año;
    double edad;

    // Se ingresa el año actual y el año que nacio el individuo
    cout << "Ingrese el año que nació:  ";
    cin >> nacimiento;

    cout << "Ingrese el año actual:  ";
    cin >> año;


    // Se calcular la fecha de nacimiento con el año actual para determinar la edad
    edad = año - nacimiento;

    // Mostrar la edad del individuo
    cout << "Su edad es:  " << edad << endl;

    return 0;
    
}