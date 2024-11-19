#include <stdio.h>
#include <stdlib.h>
int bubble_sort(int *arr,int size){
    int count_swap=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count_swap++;
            }
        }
    }
    return count_swap;
}
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int arr[50]={0},size;
        scanf("%d",&size);
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("Optimal train swapping takes %d swaps.\n",bubble_sort(arr,size));
    }
}