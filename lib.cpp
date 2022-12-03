#include "lib.h"
bool n_primo(int n, int c){
    if(n%c==0){
        if(n==c){
            return true;
        }
        else{
            return false;
        }
    }
    numprimo(n,c+1);
}
