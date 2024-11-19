#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int *remender = (int *)malloc(m * sizeof(int));
    for(int i=0;i<n;i++){
        remender[arr[i]%m]++;
    }
    for(int i=0;i<m;i++){
        printf("%d\n",remender[i]);
    }
    free(arr);
    free(remender);
}