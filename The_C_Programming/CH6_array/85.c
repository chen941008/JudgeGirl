#include <stdio.h>
void bubble_sort(int arr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int cases;
    scanf("%d",&cases);
    while(cases--){
        int side[4]={0};
        for(int i=0;i<4;i++){
            scanf("%d",&side[i]);
        }
        bubble_sort(side,4);
        if(side[0]+side[1]+side[2]<=side[3]){
            printf("banana\n");
        }
        else if(side[0]==side[3]){
            printf("square\n");
        }
        else if(side[0]==side[1]&&side[2]==side[3]){
            printf("rectangle\n");
        }
        else {
            printf("quadrangle\n");
        }
    }
}