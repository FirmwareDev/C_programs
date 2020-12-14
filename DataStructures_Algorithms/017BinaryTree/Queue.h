
#ifndef Queue_h
#define Queue_h

/* Creating a binary tree using circular queue-arrays */

struct QueueNode
{
    struct QueueNode *lchild;
    int data;
    struct QueueNode *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    QueueNode **Q;
};

void createQ(struct Queue *q, int sizeIn)
{
    q->size = sizeIn;
    q->front = q->rear =0;
    q->Q = (QueueNode**)malloc(q->size * sizeof(QueueNode*));
}

void EnQ(struct Queue *q, QueueNode *value)
{
    //check if Queue is full
    if((q->rear+1)%q->size == q->front)
        printf("Queue is Full!\n");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = value;
    }
}

QueueNode* DeQ(struct Queue *q)
{
    QueueNode *x= NULL;
    if(q->front == q->rear)
        printf("the Queue is Empty!\n");
    else
    {
        q->front = (q->front+1) % q->size;
        x= q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{
    if(q.front == q.size)
        return 1;
    else
        return 0;

}

#endif // Queue_h
