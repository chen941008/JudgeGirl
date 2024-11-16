#include <stdio.h>

int main() {
    int n, num[15], target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int dp[10001] = {0};
    dp[0] = 1;  // 和為0時的方式數
    for (int i = 0; i < n; i++) {
        for (int j = 10000; j >= num[i]; j--) {
            dp[j] += dp[j - num[i]];
        }
    }
    while (scanf("%d", &target) != EOF) {
        printf("%d\n", dp[target]);
    }
    return 0;
}
