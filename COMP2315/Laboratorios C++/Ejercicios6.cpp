#include <iostream>
using namespace std;

int main() 
{
    //Definicion de variables
    double base, altura;
    double area;
    double perimetro;

    // Se ingresa la base y altura del rectángulo
    cout << "Ingrese la base del rectángulo:  ";
    cin >> base;

    cout << "Ingrese la altrura del rectángulo:  ";
    cin >> altura;

    // Se calcular la base y altura para encontar la area del rectángulo
    area = base * altura;
    
    //
    perimetro = (2 * altura) + (2 * base) ;
    
    cout << " La área del rectángulo es la siguiente:  " << area << endl;
    cout << " El perimetro del rectángulo es :  " << perimetro << endl;

    return 0;
    
    }