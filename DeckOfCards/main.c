#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Queue.h"
#include "Stack.h"

//typedef struct Node
//{
//    int data;
//    struct Node* next;
//}Node;

struct Node *first, *second=NULL;
struct Node*last = NULL;
struct QueueNode *Q1,*Q2,*Q3=NULL;
struct NodeStack *st;

/** \brief Creating linkList to store all the cards in the order they were drawn
 *
 * \param pointer to the list
 * \param position to insert in order
 * \param the cardIndex
 *
 */

void createLL1(struct Node* p, int cardInDeck)
{

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = cardInDeck;
    //check if we creating a first node
    if(last == 0)
    {
        newNode->next = NULL;
        first = last= newNode;
    }
    else
    {
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;

    }
}

void createLL2(struct Node* p, int cardInDeck)
{
    //struct Node*last = NULL;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = cardInDeck;
    //check if we creating a first node
    if(last == 0)
    {
        newNode->next = NULL;
        first = last= newNode;
    }
    else
    {
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;

    }
}



bool compareLL(struct Node* originalOrder,struct Node* shuffledOrder)
{
    struct Node *p,*q;
    p=originalOrder;
    q=shuffledOrder;
    while(p!=0)
    {
        if(p->data == q->data)
        {

            q=q->next;
            return true;
        }
        else
            return false;
    }
}

void shuffle_ThreePiles(struct Node *p)
{
    while(p!=0)
    {
        push(&st,p->data);
        p=p->next->next->next;

    }



}


void reshuffle(struct Node* p, int numOfCards)
{
    int n;
    //*Q4,*Q5;
    struct NodeStack* st;

}

void displayLL(struct Node*p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

void displayS(struct NodeStack* p)
{
    while(p!=0)
    {
        printf("%d",p->data);
    }
}

int main()
{
    int numOfCards=0;
    int i;
    printf("Enter the number of cards in the deck ( between 1 - 52):\n");
    scanf("%d",&numOfCards);

    for(i=1;i<=numOfCards;i++)
    {
        createLL1(first,i);
    }
    displayLL(first);
    shuffle_ThreePiles(first);
    printf("\nstack values:\n");
    displayS(st);



    return 0;
}
