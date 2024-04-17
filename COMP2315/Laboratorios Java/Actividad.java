import java.util.Scanner;
public class Actividad {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in);

        //Solicita al usuario que ingrese el estado de la tarjeta
        System.out.print("Ingrese el estande de su tarjeta de biblioteca (1 para activo y 2 para inactivo)");
        int estadoTarjeta = scanner.nextInt();

        //Verificar si la tarjeta esta activa o inactiva
        if (estadoTarjeta == 1)
        {
            //Tarjeta activa
            System.out.println("Su tarjeta esta activa. Usted puede realizar prestamos. ");

        }

        if (estadoTarjeta == 2)
        {
            //Tarjeta inactiva 
            System.out.println("Su tarjeta esta inactiva. NO se permite prestamos."); 
        }

    }
}