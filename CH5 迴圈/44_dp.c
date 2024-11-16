#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int total_sum = 0;
    int current_sum = 0;

    // 從 1 到 N，逐步累加每一項的和
    for (int i = 1; i <= N; i++) {
        current_sum += i;  // 累加從 1 到 i 的和
        total_sum += current_sum;  // 將該項的和加到總和中
    }

    printf("%d\n", total_sum);
    return 0;
}