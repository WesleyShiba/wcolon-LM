#include <iostream>
using namespace std;

int main() {

    int sumaCalificaciones = 0;
    int promedio, calificacionEstudiante;
    string nombreEstudiante;

    // Se usa una estructura de iteración basada en ciclos para ingresar nombres y puntuaciones un total de 10 vezes.
    for (int i = 1; i <= 10; i++) {

        //Se ingresa los nombres y las calificaciones de los estudiantes. 
        cout << "Estudiante # " << i << ": ";
        cout << "Ingrese el nombre del estudiante: " << endl;
        cin >> nombreEstudiante; 

        cout << "Ingrese la puntuacion de " << nombreEstudiante << endl;
        cin >> calificacionEstudiante; 
        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante; 

    }
    
    //Se calcula las calificaciones de los estuduantes para sacar el promedio general de la clase.
    promedio = sumaCalificaciones / 10; 
    cout << "El promedio general de las calificaciones del grupo es: " << promedio;
    
    return 0;
}