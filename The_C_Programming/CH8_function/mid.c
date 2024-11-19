#include "mid.h"
#include <stdio.h>
void mid(int data[5], int n) {
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
    printf("Median = %d\n",data[2]);
 }
