#include "linkedList.h"

#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */


ListNode_t* newListNode(void){

    return (ListNode_t*) malloc(sizeof(ListNode_t));
}




int insertAtBeginning(List_t* list, unsigned int data){

    ListNode_t* newNode = newListNode();

    newNode->data = data;

    newNode->pNext = list->pHead;

    if (list->pHead == NULL){

        list->pTail = newNode;
    }

    list->pHead = newNode;

    list->size = list->size + 1;

    return list->size;

}


int insertAtTheEnd(List_t* list, unsigned int data){

    ListNode_t* newNode = newListNode();

    newNode->data = data;

    if (list->pHead == NULL){

        list->pHead = newNode;
        list->pTail = newNode;

    }else{

        list->pTail->pNext = newNode;

        list->pTail = newNode;

    }

    list->size = list->size + 1;

    return list->size;

}