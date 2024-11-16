//
//  oddEvenList.h
//  functions
//
//  Created by 陳宥愷 on 2024/10/12.
//

#ifndef oddEvenList_h
#define oddEvenList_h
#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};
 
struct ListNode* oddEvenList(struct ListNode* head);
#endif /* oddEvenList_h */
