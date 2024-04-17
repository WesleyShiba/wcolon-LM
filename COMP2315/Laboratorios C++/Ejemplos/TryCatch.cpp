#include <iostream>
using namespace std;

int main() {
    float numero;
    int numeroentero;

// Se ingresa un número
    cout << "Ingrese un número: ";
    cin >> numero;

//extraccion de la parte entera del numero
    numeroentero = numero;

// Se identifica se el número ingresado es entero o no. 
try
{
    if (numero != numeroentero) 
    {
        throw "El número ingresado no es entero.";
    }
        cout << "El número ingresado es entero." << numero << endl;
    } 
    catch (const char* mensaje)
    {
        cout << "Excepcion capturada: " << mensaje << endl;
    }

    return 0;
}