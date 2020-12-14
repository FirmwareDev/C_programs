#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* we need a stack structure */

struct stack
{
    int size;
    int top;
    char *A;
};

void create(struct stack *st,int sizeArr)
{
    st->size = sizeArr;
    st->top=-1;
    st->A = (char*)malloc(st->size * sizeof(char));

}

void push(struct stack *st,char value)
{
    if(st->top == (st->size-1))
        printf("Stack overflow!\n");
    else
    {
        st->top++;
        st->A[st->top]= value;
    }
}

char pop(struct stack *st)
{
    char x;
    if(st->top == -1)
        printf("empty!\n");
    else
    {
        x=st->A[st->top];
        st->top--;
    }
    return x;
}

bool isEmpty(struct stack st)
{
    if(st.top == -1)
    {
        printf("Stack empty!\n");
        return true;
    }
    else
    {
        printf("stack is not empty!\n");
        return false;
    }
}



bool isBalanced(char *exp,struct stack st)
{
    int i;
    for(i=0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
            push(&st,exp[i]);
        else if(exp[i] == ')')
        {
            if(st.top == -1)
                return 0;
            pop(&st);
        }
    }
    if(st.top== -1)
        return 1;
    else
        return 0;
}



int main()
{
    struct stack st;
    int sizeArr;
    char exp[]= "(a+b)+(a-n";
    sizeArr = sizeof(exp)/sizeof(exp[0]);
    printf("%d\n",sizeArr);
    create(&st,sizeArr);
    printf("the expression is balanced or not: %d",isBalanced(exp,st));

    return 0;

}
