#ifndef getDecimalValue_h
#define getDecimalValue_h
#include <stdio.h>
#include <stdlib.h>
 
// val : 紀錄0或1
// next : 記錄下一個結構
struct ListNode
{
    int val;
    struct ListNode *next;
};
 
int getDecimalValue(struct ListNode* head);
#endif 