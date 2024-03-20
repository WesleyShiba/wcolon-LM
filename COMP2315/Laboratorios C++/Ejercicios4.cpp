#include <iostream>
using namespace std;

int main() 
{
    //Definicion de variables
    double lado1, lado2;
    double area;

    // Se ingresa ambos lados del cuadrado
    cout << "Ingrese el primer lado del cuadrado:  ";
    cin >> lado1;

    cout << "Ingrese el segundo lado del cuadrado:  ";
    cin >> lado2;


    // Se calcular los lados para encontar la area
    area = lado1 * lado2;

    // Mostrar la área del cuadrado
    cout << " La área del cuadrado es la siguiente:  " << area << endl;

    return 0;
    
}