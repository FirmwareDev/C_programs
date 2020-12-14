
#include <stdio.h>
#include <stdlib.h>

//struct Node
//{
//    int data;
//    struct Node* next;
//}Node;


struct NodeStack
{
    int data;
    struct NodeStack* next;
}NodeStack;

struct NodeStack* top = NULL;



void push(struct NodeStack *p, int x)
{
    //create a node
    struct NodeStack* newNode = (struct NodeStack*)malloc(sizeof(NodeStack));

    //check if the stack is full
    if(newNode == NULL)
    {
        // if the new node isn't create that indicates the stack (heap memory) is full.
        printf("Stack overflow!\n");
    }
    else
    {
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }
}

int pop(struct NodeStack* p)
{
    int x = -1;
    //create a node
    struct NodeStack* newNode = (struct NodeStack*)malloc(sizeof(NodeStack));
    //check if the stack is empty
    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
}

int isEmpty()
{
    return top ? 0:1;
}

int isFull()
{
   struct NodeStack* newNode = (struct NodeStack*)malloc(sizeof(NodeStack));
   int result = newNode ? 1:0;
   free(newNode);
   return result;
}
