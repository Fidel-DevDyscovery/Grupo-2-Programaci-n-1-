public class secuencia {
    public static void main(String [] args){
        //Declaramos nuestras variables
        int A=1;
        int CONST=9;
        int b=2;
        int resultado=11;
        /*Usamos for para generar la secuencia de numeros e imprimimos los resultados 
        mientras las variables se van actualizando con las operaciones dadas*/
        for(int i=1;i<10;i++){
            System.out.println(""+A+"*"+CONST+"+"+b+"="+resultado);
            A=A+resultado;
            b=b+1;
            resultado=A*CONST+b;
        }
    }
}
