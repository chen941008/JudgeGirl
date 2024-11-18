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
    int sum=0,current_2exp=1;
    struct ListNode* temp=head;
    struct ListNode* ptr=head;
    while (temp->next!=NULL){
        temp=temp->next;
        current_2exp*=2;
    }
    while (1){
        if(ptr->val==1){
            sum+=current_2exp;
        }
        current_2exp/=2;
        ptr=ptr->next;
        if(ptr==NULL)break;
    }
    return sum;
}