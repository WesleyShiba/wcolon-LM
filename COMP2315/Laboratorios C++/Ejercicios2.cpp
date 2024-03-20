#include <iostream>
using namespace std;

int main() 
{
    //Definicion de variables
    double velocidad,tiempo;
    double distancia;

    // Se ingresa la velocidad y el tiempo del viaje
    cout << "Ingrese el promedio de velocidad:  ";
    cin >> velocidad;

    cout << "Ingrese el tiempo del viaje:  ";
    cin >> tiempo;


    // Se calcular la velocidad y el tiempo para encontrar la distancia recorrida
     distancia = velocidad * tiempo;

    // Mostrar la distancia total
    cout << "La distancia total recorrido es :  " << distancia << endl;

    return 0;

}