import java.util.Scanner;

public class empleados {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        String nombreMayorSueldo = "";
        int mayorSueldo = 0;
        
        for (int i = 1; i <= 20; i++) {
            System.out.println("Ingrese el nombre del empleado " + i + ":");
            String nombre = input.nextLine();
            
            System.out.println("Ingrese el sueldo del empleado " + i + ":");
            int sueldo = input.nextInt();
            System.out.println("");
            
            input.nextLine(); // Limpiar el buffer
            
            if (sueldo > mayorSueldo) {
                mayorSueldo = sueldo;
                nombreMayorSueldo = nombre;
            }
        }
        
        System.out.println("El empleado que más gana es: " + nombreMayorSueldo);
        System.out.println("Sueldo: " + mayorSueldo);
        
        input.close();
    }
}
