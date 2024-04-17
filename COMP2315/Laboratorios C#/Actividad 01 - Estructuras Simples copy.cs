using System;
namespace Actividad
class Program
{ 
    
    internal class Program
    {
        static void Main(string[] args)
        {
        //Solicita al usuario ingresar los años de antiquedad del empleado
        Console.Write("Ingrese los años de antiguedad del empreado: ");
        int tiempoAntiquedad = Convert.ToInt32(Console.ReadLine());

        //Determina si el empleado es elegible para el bono
        if (tiempoAntigueda >= 5)
        {
            Console.WriteLine("El empleado recibirá un bono de $1000.");
        }

        // Si el empleado tiene menos de 5 años, no recibirá bono
        if (tiempoAntiguedad < 5)
            {
                Console.WriteLine("El empleados no recibirá bono. ");
            }
        }
    }
}