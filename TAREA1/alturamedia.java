import java.util.Scanner;

public class alturamedia {
    public static void main(String[] args){
        try(Scanner r=new Scanner (System.in)){
            //Declaramos variables
            int N=0;
            int AlturaSuperior=0;
            int AlturaInferior=0;
            int AlturaMedia=0;
            int AlturaCm=0;
            int sa=0;
            int X=0;
            System.out.println("INTRODUZCA UN VALOR PARA DEFINIR N: ");
            //Leer variable desde teclado
            N=r.nextInt();
            int arreglo[]=new int[N];
            //Utilizamos el ciclo do while par calcular la media de la altura de las N personas
            do{
                System.out.println("Ingrese su altura en cm: ");
                //Leer vatiable desde teclado.
                AlturaCm=r.nextInt();
                arreglo[X]=AlturaCm;
                sa=sa+arreglo[X];
                X++;
            }while(X<N);
            AlturaMedia=sa/X;
            //usamos el ciclo for para leer cada altura del arreglo
            for(int i=0; i<arreglo.length; i++){
                if(arreglo[i]>=AlturaMedia){
                    AlturaSuperior++;
                }else{
                    AlturaInferior++;
                }
            }
            //Mostramos por pantalla las alturas superiores a la media y las inferiores
            System.out.println("Las personas que tienen una altura superior a la media son: "+AlturaSuperior);
            System.out.println("Las personas que tienen una altura inferior a la media son: "+AlturaInferior);
        }
    }
}
