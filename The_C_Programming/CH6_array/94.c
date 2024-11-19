#include <stdio.h>
#include <stdbool.h>

int main() {
    while (1) {
        bool stop = true;
        int size[7] = {0}, box = 0;

        // 讀取輸入
        for (int i = 1; i < 7; i++) {
            scanf("%d", &size[i]);
            if (size[i] != 0) {
                stop = false;
            }
        }

        // 如果所有輸入都是 0，結束程式
        if (stop) break;

        // 直接需要的箱子數量
        box += size[6]; // 尺寸6，每個需要1個箱子
        box += size[5]; // 尺寸5，每個需要1個箱子
        box += size[4]; // 尺寸4，每個需要1個箱子

        // 處理尺寸5和4後的剩餘空間
        size[1] -= size[5] * 11;  // 尺寸5會空出11個1x1空間
        size[2] -= size[4] * 5;   // 尺寸4會空出5個2x2空間

        // 處理尺寸3的箱子
        box += size[3] / 4;  // 每4個尺寸3的物品需要1個箱子
        int remaining_3 = size[3] % 4;

        if (remaining_3 > 0) {
            box++; // 剩下的尺寸3物品需要額外1個箱子

            // 根據剩下的尺寸3物品數量調整尺寸2和尺寸1的空間
            if (remaining_3 == 1) {
                size[2] -= 5; // 1個尺寸3物品剩餘空間可放5個尺寸2
                size[1] -= 7; // 剩下的空間可以放7個尺寸1
            } else if (remaining_3 == 2) {
                size[2] -= 3; // 2個尺寸3物品剩餘空間可放3個尺寸2
                size[1] -= 6; // 剩下的空間可以放6個尺寸1
            } else if (remaining_3 == 3) {
                size[2] -= 1; // 3個尺寸3物品剩餘空間可放1個尺寸2
                size[1] -= 5; // 剩下的空間可以放5個尺寸1
            }
        }

        // 處理剩下的尺寸2的物品
        if (size[2] > 0) {
            box += size[2] / 9; // 每9個尺寸2物品需要1個箱子
            if (size[2] % 9 > 0) {
                box++; // 剩下的尺寸2物品需要額外1個箱子
                size[1] -= (9 - size[2] % 9) * 4; // 調整剩餘的尺寸1空間
            }
        } 
        else {
            // 如果剩下的尺寸2不足，將尺寸1空間調整
            size[1] += size[2] * 4;
        }

        // 處理剩下的尺寸1的物品
        if (size[1] > 0) {
            box += size[1] / 36; // 每36個尺寸1物品需要1個箱子
            if (size[1] % 36 > 0) {
                box++; // 剩下的尺寸1物品需要額外1個箱子
            }
        }

        // 輸出結果
        printf("%d\n", box);
    }

    return 0;
}
