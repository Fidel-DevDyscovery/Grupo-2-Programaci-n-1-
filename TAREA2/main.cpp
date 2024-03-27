#include <iostream>

using namespace std;

int main()
{
    int numero;
    int suma;
    int multiplicacion;
    double promedio;
    for(int i=1; i<=5; i++){
        cout<<"INGRESE UN NUMERO ENTERO POSITIVO"<<endl;
        cin>>numero;
        suma=suma+numero;
        multiplicacion=multiplicacion*numero;
    }
    promedio=suma/5;
    cout<<"La suma de los 5 numeros es:"<<suma<<endl;
    cout<<"La multiplicacion de los 5 numeros es:"<<multiplicacion<<endl;
    cout<<"El promedio de los 5 numeros es:"<< promedio<<endl;

    return 0;
}
