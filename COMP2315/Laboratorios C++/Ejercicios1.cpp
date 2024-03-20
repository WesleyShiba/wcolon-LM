#include <iostream>
using namespace std;

int main() 
{
    //Definicion de variables
    double examen1, examen2, examen3, examen4;
    double promedio;

    // Se ingresa las calificaciones de los cuatro exámenes
    cout << "Ingrese la calificación del primer examen:  ";
    cin >> examen1;

    cout << "Ingrese la calificación del segundo examen:  ";
    cin >> examen2;

    cout << "Ingrese la calificación del tercer examen:  ";
    cin >> examen3;

    cout << "Ingrese la calificación del cuarto examen:  ";
    cin >> examen4;

    // Se calcular las calificaciones para sacar el promedio final
    promedio = (examen1 + examen2 + examen3 + examen4) / 4;

    // Mostrar el promedio
    cout << "El promedio final es:  " << promedio << endl;

    return 0;

}