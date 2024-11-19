#include <stdio.h>

int main() {
    int matrix_a[5][5] = {0}, matrix_b[5][5] = {0}, matrix_c[5][5] = {0};
    int row_a, col_a, row_b, col_b;

    // 讀取矩陣 A 的維度和內容
    scanf("%d%d", &row_a, &col_a);
    for(int i = 0; i < row_a; i++) {
        for(int j = 0; j < col_a; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    // 讀取矩陣 B 的維度和內容
    scanf("%d%d", &row_b, &col_b);
    for(int i = 0; i < row_b; i++) {
        for(int j = 0; j < col_b; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    // 檢查矩陣是否可以相乘
    if (col_a != row_b) {
        printf("Matrices cannot be multiplied\n");
        return 1;
    }

    // 矩陣相乘
    for(int i = 0; i < row_a; i++) {
        for(int j = 0; j < col_b; j++) {
            int sum = 0;
            for(int k = 0; k < col_a; k++) {  // 使用 col_a 或 row_b
                sum += matrix_a[i][k] * matrix_b[k][j];
            }
            matrix_c[i][j] = sum;
        }
    }

    // 輸出結果矩陣 C
    for(int i = 0; i < row_a; i++) {
        for(int j = 0; j < col_b; j++) {
            printf("%d ", matrix_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
