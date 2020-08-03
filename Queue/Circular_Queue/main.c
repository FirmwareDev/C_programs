#include <stdio.h>
#include <stdlib.h>


/*Implementation of Circular queue */


struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(struct Queue *q, int n)
{
    if((q->rear+1)%(q->size) == q->front)
        printf("The Queue is full!");
    else
    {
        q->rear = (q->rear+1) % (q->size);
        q->Q[q->rear]=n;
    }

}

void Display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<q.rear;i++)
    {
        printf("%d\t",q.Q[i]);
    }

}

int main()
{
    struct Queue q;

    printf("enter the size of the queue:\n");
    scanf("%d",&q.size);

    q.Q = (int*)malloc(q.size*sizeof(int));
    q.front=q.rear=0;
    enqueue(&q,5);
    enqueue(&q,10);
    enqueue(&q,15);
    enqueue(&q,20);
    enqueue(&q,25);
    Display(q);
    printf("Hello world!\n");
    return 0;
}
