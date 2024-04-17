{
    internal class Program
    {
        static void Main(string[] args)
        {
        //
        Console.Write("Ingrese los años de antiguedad del empreado: ");
        int tiempoAntiquedad = Convert.ToInt32(Console.ReadLine());

        //
        if (tiempoAntigueda >= 5)
        {
            Console.WriteLine("El empleado recibirá un bono de $1000.");
        }

        //
        if (tiempoAntiguedad < 5)
            {
                Console.WriteLine("El empleados no recibirá bono. ");
            }
        }
    }
}