#include "Jolly_Jumpers.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void Jolly_Jumpers(int Array[], int size) {
    int arr[105]={0};
    bool is_Jolly=true;
    for(int i=0;i<size-1;i++){
        if(abs(Array[i]-Array[i+1])>=size){
            is_Jolly=false;
            printf("Not jolly\n");
            return ;
        }
        arr[abs(Array[i]-Array[i+1])]++;
    }
    for(int i=1;i<size;i++){
        if(arr[i]!=1){
            is_Jolly=false;
            printf("Not jolly\n");
            return ;
        }
    }
    printf("Jolly\n");
}
