#include "linkedList.h"

#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */







int insertAtBeginning(List_t* list, unsigned int data){

    ListNode_t* newNode = (ListNode_t*) malloc(sizeof(ListNode_t));

    newNode->data = data;

    newNode->pNext = list->pHead;

    list->pHead = newNode;

    list->size = list->size + 1;

    return list->size;

}