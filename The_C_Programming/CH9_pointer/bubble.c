#include "bubble.h"
#include <stdio.h>
void bubble(int *arr)
{
    for(int i=4;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if(i!=4)printf("%d ", arr[i]);
        else printf("%d",arr[i]);
    }
    printf("\n");
}
