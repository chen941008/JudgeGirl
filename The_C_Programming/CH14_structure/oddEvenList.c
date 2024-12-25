
#include "oddEvenList.h"
struct ListNode* oddEvenList(struct ListNode* head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct ListNode *odd=head;
    struct ListNode *even_head=head->next;
    struct ListNode *even=even_head;

    while(even!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=even_head;
    return head;
}

