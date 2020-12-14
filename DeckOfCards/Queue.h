#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
}Node;

struct QueueNode
{
    int data;
    struct QueueNode *next;
};

struct QueueNode *front = NULL, *rear = NULL;

void EnQ(struct QueueNode *p,int x)
{

    struct QueueNode *newNode;
    newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));

    if(newNode == NULL)
        printf("Queue is full!\n");
    else
    {
        newNode->data = x;
        newNode->next = NULL;
        if(front == NULL)
        {
            front= rear =newNode;
        }
        else
        {
            rear->next= newNode;
            rear = newNode;

        }
    }
}

int DeQ(struct QueueNode* p)
{
    struct QueueNode *front = NULL, *rear = NULL;
    struct Node* x = -1;
    struct QueueNode *q;
    //check if the queue is empty
    if(front== NULL)
        printf("the queue is empty");
    else
    {
        q=front;
        x= front->data;
        front=q->next;
        free(q);

    }
    return x;
}

void display()
{
    struct QueueNode *p;
    p=front;
    while (p != NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

}
