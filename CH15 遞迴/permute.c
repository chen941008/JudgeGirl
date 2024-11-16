#include "permute.h"
#include <stdio.h>

extern void swap(int* x, int* y);

void permute(int* a, int l, int r, int n) {
    if(l==r){
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    else {
        for(int i=l;i<=r;i++){
            swap(&a[i],&a[l]);
            permute(a,l+1,r,n);
            swap(&a[i],&a[l]);
        }
    }
}
