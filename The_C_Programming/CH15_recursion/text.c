int extractMax(int* stone, int stoneSize) {// 提取陣列中的最大值並返回，同時將最大值設為 -1
    int maxindex = -1;
    int maxvalue = -1;
    for (int i = 0;i < stoneSize;i++) {
        if (stone[i] > maxvalue) {
            maxvalue = stone[i];
            maxindex = i;
        }
    }
    stone[maxindex] = -1;// 標記該位置已使用
    return maxvalue;
}

void insert(int* stone, int stoneSize, int value) {// 將值插入到陣列的第一個空位
    for (int i = 0; i < stoneSize; i++) {
        if (stone[i] == -1) { // 找到空位
            stone[i] = value;
            break;
        }
    }
}

int lastStoneWeight(int* stones, int stonesSize) {// 核心函式
    while (1) {
        int y = extractMax(stones, stonesSize);
        int x = extractMax(stones, stonesSize);
        if (x == -1 && y == -1) {
            // 沒有剩餘石頭
            return 0;
        }
        if (x == -1) {
            return y;
        }
        if (x != y) {
            // 將 y - x 插入到陣列
            insert(stones, stonesSize, y - x);
        }
    }
}

int main() {
    int n = 0;
    int ans;
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }
    ans = lastStoneWeight(a, n);
    printf("%d", ans);
    free(a);
    return 0;
}
