#include <stdio.h>
#include <stdlib.h> 
int n;//
void bubble(int *arr,int n)
{
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(int* a, int l, int r) {//陣列,目前深度,目標深度
    if(l==r){
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    else {
        for(int i=l;i<=r;i++){//開始分層
            swap(&a[i],&a[l]);
            permute(a,l+1,r);
            swap(&a[i],&a[l]);
        }
    }
}

int main() {
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bubble(a,n);
    permute(a, 0, n - 1);
    free(a);
    return 0;
}