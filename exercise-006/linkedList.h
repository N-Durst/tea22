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



int insertIntoLinkedList(linkedList* List, unsigned int data);

int removeFromLinkedList(linkedList* List, ListNode* elem);

#endif