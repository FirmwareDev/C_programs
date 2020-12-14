#include <stdio.h>
#include <stdlib.h>

struct QueueNode
{
    int data;
    struct QueueNode *next;
};

struct QueueNode *front = NULL, *rear = NULL;

void EnQ(int value)
{
    struct QueueNode *newNode;
    newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));

    if(newNode == NULL)
        printf("Queue is full!\n");
    else
    {
        newNode->data = value;
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

int DeQ()
{
    int x = -1;
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

int main()
{
    printf("Create a queue and enter all the elements:\n");
    EnQ(2);
    EnQ(3);
    EnQ(4);
    EnQ(5);
    display();

    printf("Delete/Dequeue an element:\n");
    DeQ();
    display();
    return 0;
}
