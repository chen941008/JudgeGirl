#include "f.h"
int f(int n) {
    int sum=0;
    while (n>0) {
        sum+=n%10;
        n/=10;
    }
    if(sum>=10) return f(sum);
    else return sum;
    return sum;
}
