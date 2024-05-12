#include <iostream>

using namespace std;

int main()
{
    int numeros[10];
    int contpos=0,contneg=0,contceros=0;

    for(int i=0;i<10;i++){
        cout<<"ingrese un numero entero: " ;
        cin>>numeros[i];
    }
    for(int j=0;j<10;j++){
          if (numeros[j]==0){
            contceros++;
          }else
            if(numeros[j]>0){
                contpos++;
            }else{
                contneg++;
        }
    }
    cout<<"Hay "<<contceros<<" numeros ceros"<<endl;
    cout<<"Hay "<<contneg<<" numeros negativos"<<endl;
    cout<<"Hay "<<contpos<<" numeros positivos"<<endl;
    return 0;
}
