#include "getDecimalValue.h"
#include <stdio.h>
#include <stdlib.h>

// val : 紀錄0或1
// next : 記錄下一個結構
// 取得二進制 linked list 的十進制數值
int getDecimalValue(struct ListNode* head)
{
    int sum=0;
    while(head!=NULL){
        sum<<=1;
        if(head->val==1){
            sum+=1;
        }
        head=head->next;
    }
    return sum;
}
