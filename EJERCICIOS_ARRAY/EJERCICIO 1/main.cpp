#include <iostream>

using namespace std;

int main()
{
    int alturamedia,sumadealturas,n,inferiores,x,superiores,altura;
    cout<<"ingrese la cantidad de personas a las que va a pedir su altura: "<<endl;
    cin>>n;
    int alturas[n];
    for(int i=0;i<n;i++){
        cout<<"ingrese la altura de la persona en cm: "<<endl;
        cin>>altura;
        alturas[i]=altura;
        sumadealturas=alturas[i]+sumadealturas;
        x++;
    }
    alturamedia=sumadealturas/x;
    for(int j=0;j<n;j++){
        if(alturas[j]<=alturamedia){
            superiores++;
        }else if(alturas[j]>alturamedia){
            inferiores++;
        }
    }
    cout<<superiores<<" personas tienen una altura superior a la media"<<endl;
    cout<<inferiores<<" personas tienen un altura inferior a la media"<<endl;
    return 0;
}
