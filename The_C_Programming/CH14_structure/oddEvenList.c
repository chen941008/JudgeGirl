
#include "oddEvenList.h"
struct ListNode* oddEvenList(struct ListNode* head)
{
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* odd = head;
    struct ListNode* even = head->next;
    struct ListNode* even_head = even;

    while (even != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    if (odd != NULL) {
        odd->next = even_head;
    }
    
    return head;
}

