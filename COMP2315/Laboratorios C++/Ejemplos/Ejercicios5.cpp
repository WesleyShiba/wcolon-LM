#include <iostream>
using namespace std;

int main() 
{
    //Definicion de variables
    double base, altura;
    double area;

    // Se ingresa la base y altura del rectángulo
    cout << "Ingrese la base del rectángulo:  ";
    cin >> base;

    cout << "Ingrese la altura del rectángulo:  ";
    cin >> altura;


    // Se calcular la base y altura para encontar la area del rectángulo
    area = base * altura;

    // Mostrar la área del rectángulo
    cout << " La área del rectángulo es la siguiente:  " << area << endl;

    return 0;
    
    }