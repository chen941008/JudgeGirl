#include "bin.h"
int bin(int N) {
    int b1=0;
    while (N!=0) {
       b1+=1 & N;
       N>>=1;
    }
    return b1;
}
