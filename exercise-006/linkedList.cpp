#include "linkedList.h"

#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */


ListNode_t* newListNode(void){

    return (ListNode_t*) malloc(sizeof(ListNode_t));
}

void deleteListNode(ListNode_t* node){

    free(node);

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


int deleteFromPos(List_t* list, unsigned int pos){

    if ((pos >= 2) && (pos < list->size)){

        //Beispiel mit 3 linked list, pos == 2

        ListNode_t* temp = list->pHead;

        for (int i = 1; i < (pos-1); i++){

            temp = temp->pNext; //wird in diesem Beispiel nicht ausgeführt

        }

        ListNode_t* tempPnext = temp->pNext; //pNext von Speicherbereich 1 zeigt auf 2

        temp->pNext = temp->pNext->pNext; //pNext von Speicherbereich 1 zeigt auf 3

        deleteListNode(tempPnext);//löscht Speicherbereich 2

        list->size = list->size - 1;

    }

    return 0;

}