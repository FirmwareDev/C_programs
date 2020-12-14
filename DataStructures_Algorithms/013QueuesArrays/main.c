#include <stdio.h>
#include <stdlib.h>

/* Queue using arrays with two pointers */

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int sizeIn)
{
    q->size = sizeIn;
    q->front = q->rear = -1;
    q->Q = (int*)malloc(q->size * sizeof(int));

}

void EnQ(struct Queue *q, int value)
{
    //check if queue is full
    if(q->rear == q->size-1)
        printf("Queue is full!\n");
   else
   {
       q->rear++;
       q->Q[q->rear] = value;
   }
}

int DeQ(struct Queue *q)
{
    int x = -1;
    //check if the Queue is empty
    if(q->front==q->rear)
        printf("Queue is Empty!\n");
    else
    {
        q->front++;
        x=q->Q[q->front];

    }
    return x;
}


void display(struct Queue q)
{
    int i;
    for(i=q.front +1; i <= q.rear ;i++)
    {
        printf("%d",q.Q[i]);
        printf("\n");
    }
}



int main()
{
    struct Queue q;
    create(&q,4);
    EnQ(&q,2);
    EnQ(&q,4);
    EnQ(&q,6);
    EnQ(&q,8);
    printf("Print all the elements in the Queue\n");
    display(q);
    DeQ(&q);
    printf("After de-queueing an element from the Q\n");
    display(q);
    return 0;
}
