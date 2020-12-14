#include <stdio.h>
#include <stdlib.h>

/* Formula for circular, x= (x+1 */


struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void createQ(struct Queue *q, int sizeIn)
{
    q->size = sizeIn;
    q->front = q->rear = 0;
    q->Q = (int*) malloc(q->size * sizeof(int));
}

void EnQ(struct Queue *q, int value)
{
    if((q->rear+1)%(q->size) == q->front)
        printf("Queue is full!\n");
    else
    {
        q->rear = (q->rear +1) % q->size;
         q->Q[q->rear] = value;
    }
}

int DeQ(struct Queue *q)
{
    int x=-1;
    if(q->front == q->rear)
        printf("the Queue is Empty!\n");
    else
    {
        q->front = (q->front+1) % q->size;
        x= q->Q[q->front];
    }
    return x;
}

void display(struct Queue q)
{
    int i= q.front+1;
    do{
        printf("%d",q.Q[i]);
        printf("\n");
        i=(i+1)%q.size;
    }while(i != (q.rear+1)%q.size);

}

int main()
{
    struct Queue q;
    createQ(&q,5);
    EnQ(&q,2);
    EnQ(&q,4);
    EnQ(&q,6);
    EnQ(&q,8);
    display(q);
    printf("Hello world!\n");
    DeQ(&q);
    display(q);
    return 0;
}
