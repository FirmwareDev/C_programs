#include <stdio.h>
#include <stdlib.h>

//create a nodes in a link list

struct Node
{
    int data;
    struct Node *next;
} ;

struct Node *first=NULL;
struct Node *second=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *newNode, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = A[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }

}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

//insert a new node to the link list

void Insert(struct Node *p, int value, int pos)
{
    int i;
    struct Node *newNode= NULL;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(pos == 0)
    {
        newNode->next = second;
        second = newNode;
    }
    else
    {
        for(i=0;i<pos -1; i++)
        {
            p=p->next;
        }
        newNode->next = p->next;
        p->next = newNode;

    }

}

void removeDuplicates(struct Node *p)
{
    p=first;
    struct Node *q = first->next;
    while(q!=NULL)
    {
        if(p->data == q->data)
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
        else
        {
            p=q;
            q=q->next;
        }

    }
}

//reverse the link list

static void reverseMethod1(struct Node *p)
{
    p=first;
    struct Node *prev = NULL;
    struct Node *current = NULL;

    while(p != NULL)
    {
        prev = current;
        current=p;
        p=p->next;
        current->next=prev;
    }
    first = current;

}

int main()
{

    int A[] = {1,2,3,4,5,6};
    create(A,6);
    display(first);

    printf("Inserting new elements:\n");
    Insert(second,10,0);
    Insert(second,20,1);
    Insert(second,30,2);
    Insert(second,40,3);
    Insert(second,40,4);
    Insert(second,40,5);
    Insert(second,50,6);
    display(second);
    printf("Removing duplicate elements:\n");
    removeDuplicates(first);
    display(first);
    printf("reverse link list\n");
    reverseMethod1(first);
    display(first);
    return 0;

}
