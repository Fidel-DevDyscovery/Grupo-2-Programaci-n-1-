#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int y=1;
    for(int i=0;i<=10;i++){
        cout<<x<<","<<y<<",";
        x=x+y;
        y=y+x;
    }
    return 0;
}
