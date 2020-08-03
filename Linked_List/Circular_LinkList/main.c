#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void Create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    head =(struct Node*)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = head;
        last->next=t;
        last = t;
    }
}

void Display(struct Node *p)
{
    do
    {
        printf("%d\n",p->data);
        p=p->next;
    }while(p!=head);
    printf("\n");
}



int main()
{
    int A[]={1,2,3,4,5,6};
    int arr_size;

    arr_size = sizeof(A)/sizeof(A[0]);

    Create(A,arr_size);
    Display(head);

    return 0;
}
