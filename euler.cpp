#include "std_lib_facilities.h"
bool IsPrime(int n){
    bool poopoo = true;
    for(int i = 2; i<=sqrt(n);i++){  
        if(n%i == 0){
            poopoo = false;
            break;
        }
    }
    return poopoo;
}
int main(){
    int c;
    cin>>c;
    int x;
    if(IsPrime(c)==false){
        cout<<c;
    }
    for(int i = 2; i<=c;i++){
        if(IsPrime(i)&&c%i == 0){
            c = c/i;
            x = i;
        }
    }
    cout<<x;
}
