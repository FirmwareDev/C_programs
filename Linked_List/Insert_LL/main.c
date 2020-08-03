#include <stdio.h>
#include <stdlib.h>



struct Node
{
    int data;
    struct Node *next;

} ;

struct Node *first=NULL;                  //global pointer

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
         printf("%d\t",p->data);
         p = p->next;
     }

 }

int Insert_node(struct Node *p,int pos, int x)
 {
     struct Node *t;
     int i;

     if(x == 0)
     {
         t=(struct Node*)malloc(sizeof(struct Node));
         t->data=x;
         t->data=first;
         first=t;
     }
     else if(x > 0)
     {
         t=(struct Node*)malloc(sizeof(struct Node));
         p=first;
         for(i=1;i<pos-1 &&  p ;i++)
         {
            p=p->next;
         }
         if(p)
         {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=x;
            t->next=p->next;
            p->next=t;

         }
     }
     return 0;
 }


int main()
{
    int A[]={3,6,7,10,15};
    printf("The Link list created :\n");
    create(A,5);
    display(first);
    printf("\nAfter inserting node in the link list at position 3: \n");
    Insert_node(first,3,5);
    display(first);

    return 0;
}
