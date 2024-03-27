public class anidadosbucle {
    public static void main(String[] args) {
        // Definir el número de filas del triángulo
        int filas = 10;        
        // Bucle para iterar a través de las filas
        for (int i = 0; i < filas; i++) {
            // Imprimimos los espacios en blanco para la alineación
            for (int j = 0; j < filas - i - 1; j++) {
                System.out.print("  ");
            }            
            // Imprimimos los números ascendentes
            for (int j = i + 1; j <= 2 * i + 1; j++) {
                System.out.print(j % 10 + " ");
            }        
            // Imprimimos los números descendentes
            for (int j = 2 * i; j > i; j--) {
                System.out.print(j % 10 + " ");
            }            
            // Nueva línea para pasar a la siguiente fila
            System.out.println();
        }
    }
}
