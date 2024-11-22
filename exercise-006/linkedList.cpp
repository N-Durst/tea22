#include "linkedList.h"

#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

typedef struct List {
    struct ListNode_t* pHead;
    struct ListNode_t* pTail;
    unsigned int size;
} List_t;

typedef struct ListNode {
    unsigned int data;
    struct ListNode* pNext;
} ListNode_t;