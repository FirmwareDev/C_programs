#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create_LL(int *A,int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data =A[i];
        t->next=NULL;
        last->next=t;
        last=t;
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

 int search_linear(struct Node *p, int key)
 {
     while(p!=NULL)
     {
         if(key == p->data){
            printf("\nElement found!");
            break;
         }
         else
        {
            printf("\nElement not found!");
            break;
        }
        p=p->next;
     }
     return 0;
 }

int main()
{
    int A[]={2,3,4,6,7,8};
    int arrSize,x;

    arrSize = sizeof(A)/sizeof(A[0]);


    create_LL(A,arrSize);
    display(first);
    printf("\nEnter the element to search : ");
    scanf("%d",&x);
    search_linear(first,x);

    return 0;
}
