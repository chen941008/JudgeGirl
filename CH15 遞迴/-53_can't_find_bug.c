#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <limits.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int *arr, int n, int start) {
    for (int i = start; i < n - 1; i++) {
        for (int j = start; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
bool next_permutation(int *arr,int n){
    int i;
    bool last_permutation=true;
    for(i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            last_permutation=false;
            break;
        }
    }
    if(last_permutation)return false;
    int min=INT_MAX,j_pos;
    for(int j=n-1;j>=i+1;j--){
        if(arr[i]<arr[j]&&arr[j]<min){
            min=arr[j];
            j_pos=j;
        }
    }
    swap(&arr[i],&arr[j_pos]);
    bubble_sort(arr,n,i+1);
    return true;
}
void print_element(int *arr, int n){
    for(int i=0;i<n;i++){
        if(i==n-1){
            printf("%d\n",arr[i]);
        }
        else{
            printf("%d ",arr[i]);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n,0);
    do{
        print_element(arr,n);
    }while (next_permutation(arr,n));
    return 0;
}