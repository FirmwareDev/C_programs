#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=new struct Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new struct Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int A[]={3,4,5,6,7,10};
    create(A,6);
    Display(first);
    cout << "Hello world!" << endl;
    return 0;
}
