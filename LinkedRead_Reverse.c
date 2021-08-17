//
// Created by 하윤 on 2021/08/16.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node * next;
}Node;

int main(void) {
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    //Process for reading data
    while(1) {
        printf("자연수 입력: ");
        scanf("%d",&readData);
        if(readData < 1)
            break;
        // Adding node
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    } printf("\n");

    // Output process of input data
    if(head == NULL)
        printf("The stored natural numbers doesn't exist");
   else {
       cur = head;
       printf("%d ",cur->data); //first data

       while(cur->next != NULL) {
           cur = cur->next;
           printf("%d ",cur->data);
       }
   } printf("\n");
   // Process of freeing memory
   if(head == NULL)
       return 0;
   else {
       Node * delNode = head;
       Node * delNextNode = head->next;

       printf("%d 삭제\n", head->data);
       free(delNode);
       while(delNextNode != NULL) {
           delNode = delNextNode;
           delNextNode = delNextNode->next;

           printf("%d 삭제\n",delNode->data);
       }
   }

    return 0;
}