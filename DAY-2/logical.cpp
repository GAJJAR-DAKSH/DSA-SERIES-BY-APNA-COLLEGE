#include <iostream>
using namespace std;

int main(){
    int a=3, b=1;

    cout<<!(a<b)<<endl;
    cout<<((a<b)||(3<5))<<endl;
    cout<<((a<b)&&(3<5))<<endl;
    
    return 0;
}