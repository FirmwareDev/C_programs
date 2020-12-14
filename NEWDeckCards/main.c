#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/** \Brief: The execution of the below code is intended as follows:
    1. Take a number of cards in the deck-> numOfCards
    2. create two link list and store the order of the cards drawn into them.
    3. using number of 3 , 4 and 5 pointers to deal the cards in the 3-4-5 piles pattern.
    4. call the function to deal 3 piles-> with the help of the pointers, traverse the second link list to deal every third card in the list and push the value in the stack
        for deck-> 1 2 3 4 5 6 7
        *after dealing for 3 piles, the shuffled order will become 7 4 1 5 2 6 3 (in the stack copied from second list)
        *modify the contents of second list with the new order in the stack(pop all elements)
    5. call the function to deal 4 piles-> similar method as 3-piles, expect 4 pointers used.
        for deck -> 7 4 1 5 2 6 3 stack output -> 2 7 6 4 3 1 5

    6. call the function to deal 5 piles-> similar method as 3-piles, expect 5 pointers used.
    7. repeat step 4, 5, 6 until the order in first link list is same as the shuffled link list.
        take a counter=0, and increment it until the original order is obtained.
        counter-> given the numbers of rounds it will take to put the deck back into original order
 *
 */

 /**< Globals */
struct Node
{
    int data;
    struct Node* next;
}Node;

struct Node*top = NULL;
struct Node *first, *second, *third=NULL;
struct Node*last1 = NULL;
struct Node*last2 = NULL;

/**< To compare the original and shuffled order */

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


/**< Creates the link list with original order of cards */

void createLL1(struct Node* p, int cardInDeck)
{

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = cardInDeck;
    //check if we creating a first node
    if(last1 == 0)
    {
        newNode->next = NULL;
        first = last1= newNode;
    }
    else
    {
        newNode->next = NULL;
        last1->next = newNode;
        last1 = newNode;

    }
}

/**< Creates a second link list to shuffle the cards */

struct Node* createLL2(struct Node** p, int cardInDeck)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = cardInDeck;
    //check if we creating a first node
    if(last2 == 0)
    {
        newNode->next = NULL;
        second = last2= newNode;
    }
    else
    {
        newNode->next = NULL;
        last2->next = newNode;
        last2 = newNode;

    }
    return second;
}

/**< Create a stack using using list to store the pile in the order P1+P2+P3 and so on */

struct Node *push(struct Node** p, int cardInDeck)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    //check if we creating a first node
    if(top == 0)
    {
        newNode->data = cardInDeck;
        newNode->next = NULL;
        top = newNode;
    }
    else
    {
        newNode->data = cardInDeck;
        newNode->next = top;
        top = newNode;

    }
    return top;
}

/**< To pop the top element from the stack */

int pop(struct Node **p)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));;
    int x = -1; //stores the value popped from the stack
    if(top==NULL)
    {
        printf("stack empty!\n");
    }
    else
    {
        temp = top;
        top=top->next;
        x=(top->data);
        free(temp);
    }
    return x;
}

/**< Function to deal for pile count 3  */

void dealForThree(struct Node* updatedList)
{
    struct Node*p, *q,*r;

    p=updatedList;
    q=p->next;
    r=q->next;
    while(r!=0)
    {
        push(&top,r->data);
        if(r->next!=0)
        {
            r=r->next;
        }
        else
            break;
        if(r->next!=0)
        {
            r=r->next;
        }
        else
            break;
        if(r->next!=0)
        {
          r=r->next;
        }
        else
        {
            printf("reached NULL!\n");
            break;
        }
    }
    while(q!=0)
    {
        push(&top,q->data);
        if(q->next!=0)
        {
            q=q->next;
        }
        else
            break;
        if(q->next!=0)
        {
            q=q->next;
        }
        else
            break;
        if(q->next!=0)
        {
          q=q->next;
        }
        else
        {
            printf("reached NULL!\n");
            break;
        }
    }
    while(p!=0)
    {
        push(&top,p->data);
        if(p->next!=0)
        {
            p=p->next;
        }
        else
            break;
        if(p->next!=0)
        {
            p=p->next;
        }
        else
            break;
        if(p->next!=0)
        {
          p=p->next;
        }
        else
        {
            printf("reached NULL!\n");
            break;
        }
    }
}

/**< Function to deal for pile count 4  */

void dealForFour(struct Node* updatedList)
{
    struct Node*p, *q,*r,*s;

    p=updatedList;
    q=p->next;
    r=q->next;
    s=r->next;
    while(r!=0)
    {
        push(&top,r->data);
        if(r->next!=0)
        {
            r=r->next;
        }
        else
            break;
        if(r->next!=0)
        {
            r=r->next;
        }
        else
            break;
        if(r->next!=0)
        {
          r=r->next;
        }
        else
        {
            printf("reached NULL!\n");
            break;
        }
    }
    while(q!=0)
    {
        push(&top,q->data);
        if(q->next!=0)
        {
            q=q->next;
        }
        else
            break;
        if(q->next!=0)
        {
            q=q->next;
        }
        else
            break;
        if(q->next!=0)
        {
          q=q->next;
        }
        else
        {
            printf("reached NULL!\n");
            break;
        }
    }
    while(p!=0)
    {
        push(&top,p->data);
        if(p->next!=0)
        {
            p=p->next;
        }
        else
            break;
        if(p->next!=0)
        {
            p=p->next;
        }
        else
            break;
        if(p->next!=0)
        {
          p=p->next;
        }
        else
        {
            printf("reached NULL!\n");
            break;
        }
    }
}

/**< Function to deal for pile count 5  */

void dealForFive(struct Node* updatedList)
{
    struct Node*p, *q,*r,*s,*t;

    p=updatedList;
    q=p->next;
    r=q->next;
    s=r->next;
    t=s->next;

}

/**< Display function- for debugging */

void displayLL(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

/**< Display function- for debugging */

void StDisplay(struct Node *st,int numOfCards)
{
    struct Node *p=top;
    int i=numOfCards;
    for(i=0;i<numOfCards;i++)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

}
int DeleteList(struct Node *second)
{
    struct Node *temp=NULL;
    int i,x=-1;

    temp=second;
    x=second->data;
    second=second->next;
    free(temp);
    return x;
}

void copyElements(int numOfCards)
{
    int i;
    for(i=0;i<numOfCards;i++)
    {
        createLL2(&second,pop(&top));
    }

}


int main()
{
    int numOfCards=0;
    static int numOfRounds=0;
    int i;
    top = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the number of cards in the deck ( between 1 - 52):\n");
    scanf("%d",&numOfCards);

    for(i=1;i<=numOfCards;i++)
    {
        createLL1(first,i);
        createLL2(second,i);
    }
    printf("original linklist:\n");
    displayLL(first);
    printf("Second link list:\n");
    displayLL(&second);
    dealForThree(&second);
    for(int i =0;i<numOfCards;i++)
    {
        printf("Element deleted in second list: %d",DeleteList(second));
    }
    second =NULL;

    printf("Updated stack:\n");
    StDisplay(top,numOfCards);
    copyElements(numOfCards);
    printf("Second Updated link list:\n");
    displayLL(second);

    /**< Main logic */
    while(1)
    {
        //call deal for 3
        dealForThree();
        numOfRounds++;
        //update the second list with the new order in the stack

        if(compareLL(first,second) == true)
        {
            printf("Deck in original order, in %d rounds! ",numOfRounds);
            break;
        }
        //cal deal for 4
        dealForFour();
        numOfRounds++;
        //update the second list with the new order in the stack


        if(compareLL(first,second) == true)
        {
            printf("Deck in original order, in %d rounds! ",numOfRounds);
            break;
        }
        //call deal for 5
        dealForFive();
        numOfRounds++;
        //update the second list with the new order in the stack


        if(compareLL(first,second) == true)
        {
            printf("Deck in original order, in %d rounds! ",numOfRounds);
            break;
        }

    }


    return 0;
}
