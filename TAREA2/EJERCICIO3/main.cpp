#include <iostream>
using namespace std;
int main()
{
    int cont=8;
    int r,a=1;
    int aux1=1,aux2=2,aux3;
    int cons2=9;
    for(int i=1; i<10; i++){
        aux3=aux1*cons2+aux2;
        r=aux1*cont+a;
        cout<<aux1<<"x"<<cont<<"+"<<a<<"="<<r<<endl;
        aux1=aux1+aux3;
        cons2=cons2;
        aux2=aux2+1;
        a=a+1;
        }
    return 0;
}
