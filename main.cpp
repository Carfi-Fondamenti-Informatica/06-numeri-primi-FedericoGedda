#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int n=0,c=2;
    cin>>n;
    if(n_primo(n,c)==true){
        cout<<"numero primo";
    }
    else{
        cout<<"numero non primo";
    }
    return 0;
}
