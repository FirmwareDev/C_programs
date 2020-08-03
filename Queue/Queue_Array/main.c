#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(struct queue *q, int n)
{
    //check if the queue is full i.e Rear -> pointing on the last index of the array
    if(q->rear == q->size-1)
        printf("Queue is full!\n");
    else
    {
        q->rear++;
        q->Q[q->rear]=n;
    }
}

int dequeue (struct queue *q)    // we don't give the element to delete since it will ALWAYS delete the first element in the queue
{
   int x= -1;

   if(q->front == q->rear)
        printf("The queue is empty!");
   else{
    q->front++;
    x= q->Q[q->front];
   }
   return x;
}

void Display(struct queue q)
{
    int i;
    for(i=q.front+1;i<q.rear;i++)
    {
        printf("%d\t",q.Q[i]);
    }
}


int main()
{
    struct queue q;
    printf("Enter the size of the Queue:\n");
    scanf("%d",&q.size);

    q.Q =(int*)malloc(q.size*sizeof(int));

    q.front=q.rear= -1;

    enqueue(&q,5);
    enqueue(&q,7);
    enqueue(&q,10);
    enqueue(&q,15);

    Display(q);

    //dequeue(&q);
    //Display(q);


    return 0;
}
