#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create_nodes(int *A,int n)
{
    struct Node *t,*last;
    int i;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p)
{
    printf("The data in the nodes created:\n");
    while(p!= NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}

/* Time complexity is O(n) */

void count_nodes(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    printf("\nThe number of nodes in Link lists:%d\t\n",count);
}

void sumOfNodes(struct Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum += (p->data);
        p=p->next;
    }

    printf("\nThe sum of all the nodes: \t %d \n",sum);
}

void max_element(struct Node *p)
{
    int i=0;
    while(p!=NULL)
    {

        if(p->data > i)
        {
            i=p->data;
            p=p->next;
        }
    }

    printf("\nThe max number is: %d",i);
}

int main()
{
    int A[]={2,3,4,5,6,7,8};
    int size_arr;

    size_arr = sizeof(A)/sizeof(A[0]);
    printf("Array size: %d\n", size_arr);

    create_nodes(A,size_arr);
    display(first);
    count_nodes(first);
    sumOfNodes(first);
    max_element(first);
    return 0;
}
