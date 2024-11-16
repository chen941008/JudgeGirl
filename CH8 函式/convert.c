#include "convert.h"

void convert(int a[3][3], int b[3][3]){
    // 將矩陣 a 轉置到矩陣 b
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }
}
