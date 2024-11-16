#include "D_size.h"
int D_size(int S, int D) {
    int sum=0;
    while (1)
    {
        sum+=S;
        if(sum>=D)return S;
        S++;
    }
}
