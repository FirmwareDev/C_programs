#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* we need a stack structure */

struct stack
{
    int size;
    int top;
    int *A;
};

void create(struct stack *st)
{
    printf("Enter the size of the stack:\n");
    scanf("%d", &st->size);
    st->top =-1;
    st->A = (int*)malloc(st->size * sizeof(int));
}

void display(struct stack st)
{
    int i;
    for(i=st.top; i>=0; i--)
    {
        printf("%d\n",st.A[i]);
    }
}

bool isEmpty(struct stack st)
{
    if(st.top == -1)
        return true;
    else
        return false;
}

bool isFull(struct stack st)
{
    if(st.top == (st.size -1))
        return true;
    else
        return false;
}

void push(struct stack *st, int value)
{
    //check if the stack is full
    if(st->top == st->size-1)
        printf("Stack overflow!\n");
    else
    {
        st->top++;
        st->A[st->top] = value;
    }
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->top == -1 )
        printf("Stack underflow/Empty!\n");
    else
    {
        x = st->A[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack st,int pos)
{
    int x =-1;
    if((st.top - pos + 1) < 0 )
        printf("Invalid position!\n");
    else
    {
        x = st.A[st.top - pos +1];
    }
     return x;

}

int stackTop(struct stack st)
{
    if(!isEmpty(st))
        return st.A[st.top];

    else
        return 0;
}


int main()
{
    struct stack st;

    create(&st);

    printf("Elements in the stack are:\n");
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    display(st);

    printf("Pop an element from the stack:\n");
    pop(&st);
    display(st);

    printf("peek at an element in the stack: %d\n",peek(st,3));

    printf("top element in the stack: %d \n",stackTop(st));




    printf("Hello world!\n");
    return 0;
}
