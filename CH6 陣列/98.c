#include <stdio.h>
#include <stdbool.h>
int main(){
    int n,arr[100]={0},count_not_zeros=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int input;
        scanf("%d",&input);
        if(input!=0){
            arr[count_not_zeros++]=input;
        }
    }
    for(int i=0;i<n;i++){
        if(i==n-1)printf("%d",arr[i]);
        else printf("%d ",arr[i]);
    }
    printf("\n");
}