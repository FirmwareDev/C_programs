#include <iostream>

using namespace std;

class Node
{
public:

    int data;
    Node *next;
};

class LinkList
{
private:
    Node *first;

public:
    // constructor
    LinkList(){first = NULL;}
    //constructor to create a link list
    LinkList(int A[],int n);
    //destructor
    ~LinkList();


    //function prototypes
    void display();
    void countNode();
    void Insert(int position, int value);
    void Delete(int position);


};

LinkList::LinkList(int A[],int n)
{
    int i;
    Node *newNode, *last;
    first = new(Node);
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        newNode = new(Node);
        newNode->data = A[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

LinkList::~LinkList()
{
    Node *p =first;
    while(first)
    {
        first=first->next;
        delete(p);
        p=first->next;

    }

}

void LinkList::display()
{
    Node *p=first;
    while(p!=0)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

int main()
{
    int A[] = {3,5,7,12,34};
    LinkList ll(A,5);

    ll.display();
    ll.~LinkList();
    //ll.display();
    cout << "end!" << endl;
    return 0;
}
