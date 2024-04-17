#include <iostream>
using namespace std;

int main ()
{
    int opcion;

    cout <<"Categorías de instrumentos"<<endl;
    cout <<"1. Guitarra  "<<endl;
    cout <<"2. Piano  "<<endl;
    cout <<"3. Batería  "<<endl;
    cout <<"4. Violín  "<<endl;
    cout <<"5. Flauta  "<<endl;
    cout <<"-------------------------"<<endl;
    cout <<"Por favor selecciona un instrumento : ";
    cin >> opcion;

    switch(opcion)
    {
        case 1: //Guitarra
            cout << "El descuento es del 10% " <<endl;
            break;

        case 2: //Piano
            cout << "El descuento es del 15%" <<endl;
            break;

        case 3: //Batería
            cout << "El descuento es del 20%" <<endl;
            break;

        case 4: //Violín
            cout << "El descuento es del 12%" <<endl;
            break;

        case 5: //Flauta
            cout << "El descuento es del 8%" <<endl;
            break;

        default: // En caso sí se ingresa una opcion invalida. 
        cout << "Instrumento no reconocido. Intente de nuevo."<<endl;
    }
}