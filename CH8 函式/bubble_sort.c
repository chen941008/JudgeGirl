#include "bubble_sort.h"
#include <stdio.h>
void bubble_sort(int data[]) {
    int temp;
    for(int i=5;i>0;i--){
        for(int j=1;j<i;j++){
            if(data[j-1]>data[j]){
                temp=data[j-1];
                data[j-1]=data[j];
                data[j]=temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if(i!=4)printf("%d ", data[i]);
        else printf("%d",data[i]);
    }
    printf("\n");
}
