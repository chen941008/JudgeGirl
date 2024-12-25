#include <stdio.h>
 
int main() {
    int n = 5;
    int a[5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int *p = a;
    printf("%d ", *p);//範例:印出當前指標的值
    printf("%d ", *(p++));//印出當前指標的值後，指標下移
    printf("%d ", (*p)++);//印出當前指標的值後，該值+1
    printf("%d ", *(++p));//指標下移後，再印出當前指標的值
    printf("%d ", ++(*p));//先把當前指標的值+1，再印出當前指標的值
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}