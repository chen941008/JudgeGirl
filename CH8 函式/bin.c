#include "bin.h"
int bin(int N) {
    int b1=0,temp=N;
    while (temp!=0) {
        if(temp%2!=0){
            b1++;
            temp--;
            temp/=2;
        }
        else temp/=2;
    }
    return b1;
}
