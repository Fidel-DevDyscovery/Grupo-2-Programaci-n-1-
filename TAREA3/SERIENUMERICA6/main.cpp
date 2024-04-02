#include <iostream>

using namespace std;

int main()
{
    int n=5;
    for(int i=1;i<=10;i++){
        cout<<n<<",";
        if(i%2){
            n=n*8;
        }else{
            n=n+1;
        }
    }
    return 0;
}
