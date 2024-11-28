#include "getDecimalValue.h"
#include <stdio.h>
#include <stdlib.h>

// val : 紀錄0或1
// next : 記錄下一個結構
int getDecimalValue(struct ListNode* head)
{
    if(head==NULL){
        return 0;
    }
    int sum=0;
    struct ListNode* ptr=head;
    while (ptr!=NULL){
        sum=sum*2+ptr->val;
        ptr=ptr->next;
    }
    return sum;
}