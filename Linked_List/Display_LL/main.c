#include <stdio.h>
#include <stdlib.h>

/* Creating a  node and display the elements*/


struct Node
{
    int data;
    struct Node *next;

} *first=NULL;                //global pointer

void create(int *A, int num)
{
    struct Node *t,*last;
    int i;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<num;i++)
    {
       t = (struct Node*)malloc(sizeof(struct Node));
       t->data = A[i];
       t->next = NULL;
       last->next = t;
       last = t;
    }
}

 void display(struct Node *p)
 {

     while(p!= NULL)
     {
         printf("%d\n",p->data);
         p = p->next;
     }

 }


int main()
{
    int A[]={3,6,7,10,15};
    create(A,5);
    display(first);
    /*
    struct Node *p, *q;
    p=(struct Node*)malloc(sizeof(struct Node)); //allocating memory dynamically

    p->data=10;
    p->next=NULL;

    q = p;                           // address in p is also copied in q
    q=p->next;                       // q contains the address of the next node to p
    p = p->next;                     // to move p go the next node

    */


    return 0;
}
