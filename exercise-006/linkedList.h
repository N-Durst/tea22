#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct ListNode {
    unsigned int data;
    struct ListNode* pNext;
}ListNode_t;


typedef struct List {
    ListNode_t* pHead;
    ListNode_t* pTail;
    unsigned int size;
}List_t;

ListNode_t* newListNode(void);

int insertAtBeginning(List_t* list, unsigned int data);

int insertAtTheEnd(List_t* list, unsigned int data);

int removeFromLinkedList(List_t* list, ListNode* elem);

#endif