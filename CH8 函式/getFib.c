#include "getFib.h"
#include <stdio.h>
void getFib(int N) {
    int arr[10000];
    arr[1]=0;
    arr[2]=1;
    if(N==1)printf("0");
    else if(N==2)printf("0 1");
    else{
        printf("0 1 ");
        for(int i=3;i<=N;i++){
            arr[i]=arr[i-1]+arr[i-2];
            if(i==N)printf("%d",arr[i]);
            else printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
