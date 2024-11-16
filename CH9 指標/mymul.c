#include "mymul.h"
int mymul(int *a, int size) {
    int sum=1;
    for(int i=0;i<size;i++){
        if(a[i]==0)return 0;
        else sum*=a[i];
    }
    return sum;
}
