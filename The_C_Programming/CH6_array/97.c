#include <stdio.h>
int max(int a, int b) {
    if (a > b) return a;
    return b;
}
int main(){
    int n,sum=-100,temp,ans=-100;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        sum = max((sum + temp),temp);
        ans = (max(ans, sum));
    }
    printf("%d", ans);
}