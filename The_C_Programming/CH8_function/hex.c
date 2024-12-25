#include "hex.h"
int hex(int N) {
    int temp,b2=0;
    while (N!=0) {
        temp=N%10;
        while (temp!=0){
            b2+=temp & 1;
            temp>>=1;
        }
        N/=10;
    }
    return b2;
}
