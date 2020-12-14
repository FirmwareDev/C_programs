#include <stdio.h>
#include <stdlib.h>

/* Ops o n Link List
    1. Remove duplicate
    2.
 */

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first;

void create(int A[], int n)
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
    while(p!=0)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

void removeDuplicates(struct Node *p)
{
    p=first;
    struct Node *q= first->next;
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

void reverseLinkList(struct Node *p)
{
    struct Node *q=NULL , *r = NULL;
    //p=first;

    while(p!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void RReverseLL(struct Node *q, struct Node *p)
{
    if(p!= 0)
    {
        RReverseLL(p,p->next);
        p->next =q;
    }
    else
    {
        first =q;
    }
}

int main()
{
    int A[]={3,7,7,7,16,16,27};
    create(A,7);
    display(first);
    printf("After removing the duplicate elements:\n");
    removeDuplicates(first);
    display(first);
    printf("Reverse the links of the link list to get a reversed LL:\n");
    reverseLinkList(first);
    display(first);
    printf("Reverse the links calling recursive function:\n");
    RReverseLL(NULL,first);
    display(first);

    return 0;
}
