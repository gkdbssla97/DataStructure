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

    head = (Node*) malloc(sizeof(Node)); // add
    tail = head; // add

    while(1) {
        printf("자연수 입력: ");
        scanf("%d",&readData);
        if(readData < 1)
            break;

        newNode = (Node*) malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        tail->next = newNode; // add
        tail = newNode; // add
    } printf("\nOutput all data\n");

    if(head == tail)
        printf("Fail\n");
    else {
        cur = head;
        while(cur->next != NULL){
            cur = cur->next;
            printf("%d ",cur->data);
        }
    } printf("\n");
    if(head == tail)
        return 0;
    else {
        Node * delNode = head;
        Node * delNextNode = head->next;

        while(delNextNode != NULL) {
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d를 삭제 \n",delNode->data);
            free(delNode);
        }
    }

    return 0;
}