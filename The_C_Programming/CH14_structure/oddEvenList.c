
#include "oddEvenList.h"
struct ListNode* oddEvenList(struct ListNode* head)
{
    if (head == NULL) {  // 如果鏈結串列為空，直接返回空
        return NULL;
    }
    int count=0;
    struct ListNode* odd_head=NULL;
    struct ListNode* even_head=NULL;
    struct ListNode* odd_tail=NULL;
    struct ListNode* even_tail=NULL;
    struct ListNode* ptr=head;
    
    while (ptr != NULL) {
        count++;
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = ptr->val;
        newNode->next = NULL;
        if (count % 2 == 1) {  // 奇數
            if (odd_head == NULL) {  // 如果奇數串列是空的，初始化頭尾
                odd_head = odd_tail = newNode;
            } else {  // 非空串列，加入新節點到尾部
                odd_tail->next = newNode;
                odd_tail = newNode;
            }
        } else {  // 偶數
            if (even_head == NULL) {  // 如果偶數串列是空的，初始化頭尾
                even_head = even_tail = newNode;
            } else {  // 非空串列，加入新節點到尾部
                even_tail->next = newNode;
                even_tail = newNode;
            }
        }

        ptr = ptr->next;  // 移動到下一個節點
    }

    if (odd_tail != NULL) {  // 如果奇數串列不空，將尾部接到偶數串列
        odd_tail->next = even_head;
    }
    return odd_head;
}

