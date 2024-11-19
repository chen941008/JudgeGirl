#include <stdio.h>
void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int side[3]={0};
    for(int i=0;i<3;i++){
        scanf("%d",&side[i]);
    }
    bubble_sort(side,3);
    if(side[0]+side[1]<=side[2]){
        printf("not a triangle");
    }
    else if(side[0]==side[2]){
        printf("regular triangle");
    }
    else if(side[0]*side[0]+side[1]*side[1]==side[2]*side[2]){
        printf("rectangular triangle");
    }
    else if (side[0]==side[1]||side[1]==side[2]){
        if(side[0]*side[0]+side[1]*side[1]>side[2]*side[2]){
            printf("isosceles acute triangle");
        }
        else {
            printf("isosceles obtuse triangle");
        }
    }
    else{
        if(side[0]*side[0]+side[1]*side[1]>side[2]*side[2]){
            printf("acute triangle");
        }
        else {
            printf("obtuse triangle");
        }
    }
    printf("\n");
}