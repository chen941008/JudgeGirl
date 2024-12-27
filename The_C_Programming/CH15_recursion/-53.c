 #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

// 交換兩個整數的值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 比較函數，用於 qsort 進行升序排序
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 找到下一個字典序排列
bool next_permutation(int *arr, int n) {
    int i;
    bool last_permutation = true;
    // 從右邊開始尋找第一個 arr[i] < arr[i+1] 的位置
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            last_permutation = false;
            break;
        }
    }
    if (last_permutation) return false;  // 已經是最後一個排列

    // 找到比 arr[i] 大的最小數字
    int min = INT_MAX, j_pos;
    for (int j = n - 1; j > i; j--) {
        if (arr[i] < arr[j] && arr[j] < min) {
            min = arr[j];
            j_pos = j;
        }
    }

    // 交換 arr[i] 和 arr[j_pos]
    swap(&arr[i], &arr[j_pos]);

    // 排列 arr[i+1] 之後的數字，按升序排列
    qsort(arr + i + 1, n - i - 1, sizeof(int), compare);
    return true;
}

// 輸出陣列元素
void print_element(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d\n", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // 讀取陣列大小
    int *arr = (int *)malloc(n * sizeof(int));  // 動態分配記憶體

    // 讀取陣列元素
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 排序初始陣列
    qsort(arr, n, sizeof(int), compare);

    // 產生並輸出所有字典序排列
    do {
        print_element(arr, n);
    } while (next_permutation(arr, n));

    // 釋放動態分配的記憶體
    free(arr);

    return 0;
}
