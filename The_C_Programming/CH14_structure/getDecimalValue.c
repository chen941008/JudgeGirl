#include "getDecimalValue.h"
#include <stdio.h>
#include <stdlib.h>

// val : 紀錄0或1
// next : 記錄下一個結構
// 取得二進制 linked list 的十進制數值
int getDecimalValue(struct ListNode* head)
{
    // 儲存結果
    int sum = 0;

    // 遍歷 linked list
    while (head != NULL) {
        //  move current sum one bit to the left
        //  and add the value of the current node
        sum = (sum << 1) | head->val;

        //  move to next node
        head = head->next;
    }

    //  return the result
    return sum;
}
