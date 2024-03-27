import java.util.Scanner;

public class mediadenumeros {
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        int[] numeros = new int[10];

        for (int i = 0; i < 10; i++) {
            System.out.print("Introduce el número entero " + (i + 1) + ": ");
            numeros[i] = x.nextInt();
        }

        int[] positivos = new int[10];
        int[] negativos = new int[10];
        int countPositivos = 0;
        int countNegativos = 0;

        for (int numero : numeros) {
            if (numero > 0) {
                positivos[countPositivos] = numero;
                countPositivos++;
            } else if (numero < 0) {
                negativos[countNegativos] = numero;
                countNegativos++;
            }
        }

        double mediaPositivos = calcularMedia(positivos, countPositivos);
        double mediaNegativos = calcularMedia(negativos, countNegativos);

        System.out.println("La media de los valores positivos es: " + mediaPositivos);
        System.out.println("La media de los valores negativos es: " + mediaNegativos);
    }

    public static double calcularMedia(int[] array, int count) {
        if (count == 0) {
            return 0;
        }
        double suma = 0;
        for (int i = 0; i < count; i++) {
            suma += array[i];
        }
        return suma /count;
    }
}
