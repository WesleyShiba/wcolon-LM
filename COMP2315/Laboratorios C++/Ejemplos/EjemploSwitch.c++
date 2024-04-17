#include <iostream>
using namespace std;

int main ()
{
    int opcion;

    cout <<"Bienvenido a Johanna's Cafe : "<<endl;
    cout <<"MENU  "<<endl;
    cout <<"1. Cafe  "<<endl;
    cout <<"2. Te  "<<endl;
    cout <<"3. Chocolate Caliente  "<<endl;
    cout <<"4. Jugo de Naranj  "<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<"Por favor selecciona tu bebida: "<<endl;
    cin >> opcion;

    switch(opcion)
    {
        case 1: //Café
            cout << "El precio del Cafe es $2" <<endl;
            break;

        case 2: //Te
            cout << "El precio del Te es $1.5" <<endl;
            break;

        case 3: //Chocolate Caliente
            cout << "El precio del Chocolate Caliente es $2.5" <<endl;
            break;

        case 4: //Jugo de Naranja
            cout << "El precio del Jugo de Naranja es $3" <<endl;
            break;

        default: //
        cout << "Opcion NO valida. Porfavor, selecciona una bebida del menu"<<endl;
    }
}