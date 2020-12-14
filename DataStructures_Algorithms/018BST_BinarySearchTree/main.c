#include <stdio.h>
#include <stdlib.h>

/*  1. Create a struct for the node
    2. create insert function
        2a. we use 3 pointers,
            1- to traverse the links in the BST
            2- trailing pointer to store
            3- to create a new node
        2b. check if inserting on first node i.e root
            create a new node
        2c. continue till pointer reaches NULL,
            check key > left child, or right child or key found
        2d. create a node and assign it to the appropriate node using the tail pointer
    3. create an Inorder() to organise and print the created tree
    4. create a search function to look for the key element , and return the value of the node if found.


*/


struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Node *root = NULL;

void Insert(int value)
{
    struct Node *t=root, *r=NULL;
    struct Node *newNode;

    if(root == NULL)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->lchild = newNode->rchild = NULL;
        root = newNode;
        return;
    }
    while(t!=NULL)
    {
        r=t;

        if(value < t->data)
            t=t->lchild;
        else if(value > t->data)
            t=t->rchild;
        else
            return;
    }

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->lchild = newNode->rchild = NULL;

    if(value < r->data)
        r->lchild = newNode;
    else
        r->rchild = newNode;
}

void Inorder(struct Node *p)
{

    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

struct Node* Search(int key)
{
    struct Node *p =root;
    while(p)
    {
        if(key == p->data)
            return p;
        else if(key < p->data)
            p = p->lchild;
        else if(key > p->data)
            p = p->rchild;
    }
    return NULL;

}

int main()
{
    struct Node *temp;
    Insert(20);
    Insert(15);
    Insert(10);
    Insert(35);
    Insert(26);
    Insert(28);

    Inorder(root);
    printf("\n");

    temp = Search(35);
    if(temp != NULL)
        printf("Key %d is found\n", temp->data);
    else
        printf("Key not found!\n");
    return 0;
}
