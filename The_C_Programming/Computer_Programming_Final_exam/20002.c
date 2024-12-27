#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/******************************************************************** 
 * 
 * 由於該題無法上傳批改娘，不保證100%的正確性，請自行檢查。
 * 第一步一定是先取最小的元素，接著對剩下元素去做全排列來計算最小的時間，可以把12!降到11!
 * 並且在當前出現比min大的sum_time時就可以中止計算。
 * 與助教確認過，這樣的邏輯可以通過測資。
 * 
*********************************************************************/
int min = INT_MAX;

int N = 0, buff = 0 , min_element = INT_MAX;
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int  time_computation(int* arr) {
    int sum = min_element, atk = 1 + buff;
    for(int i = 1; i < N; i++) {
        if(sum>min) {
            return INT_MAX;
        }
        if(arr[i] % atk == 0) {
            sum+=arr[i]/atk;
        }
        else{
            sum+=arr[i]/atk + 1;
        }
        atk+=buff;
        
    }  
    return sum;  
}

void permute(int* a, int l,int n) {
    if(l==n-1){
        int curr_sum = time_computation(a);
        if(curr_sum<min) min = curr_sum;
    }
    else {
        for(int i=l;i<n;i++){
            swap(&a[i],&a[l]);
            permute(a,l+1,n);
            swap(&a[i],&a[l]);
        }
    }
}
int main() {
    
    scanf("%d %d", &N, &buff);
    int *arr = malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    min_element = arr[0];
    permute(arr, 1, N);
    printf("%d\n", min);
    free(arr);
}