#include <iostream>

using namespace std;

int main()
{
    int numeros[10];
    int mediadepositivos,mediadenegativos;
    int sumadepositivos=0,sumadenegativos=0;
    int contpos=0,contneg=0;

    for(int i=0;i<10;i++){
        cout<<"ingrese un numero entero difrente 0 positivo o negativo: " ;
        cin>>numeros[i];
        if(numeros[i]>0){
            sumadepositivos=sumadepositivos+numeros[i];
            contpos++;
        }else{
            sumadenegativos=numeros[i]+sumadenegativos;
            contneg++;
        }
    }
    mediadepositivos=sumadepositivos/contpos;
    mediadenegativos=sumadenegativos/contneg;
    cout<<"La media de los valores positivos es: "<<mediadepositivos<<endl;
    cout<<"La media de los valores negativos es: "<<mediadenegativos<<endl;
    return 0;
}
