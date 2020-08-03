#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to delete an element at desired position from an array */

int delete_element(int *A,int num)
{
    int i=0,pos=0,x=0;
    printf("Enter the position of the element:\n");
    scanf("%d",&pos);

    while(i<=pos)
    {
        if(i==pos)
        {
            x=A[pos];
            break;
        }
        i++;
    }
    i=pos;
    while(i<num)
    {
        A[i]=A[i+1];
        i++;
    }


    num--;
    return *A;
}


void display(int *A, int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("%d\t",A[i]);
    }
}

int main()
{
    int *A;
    int i,num;

    printf("Enter the number of elements:\n");
    scanf("%d",&num);

    A= (int*)malloc(num*sizeof(int));

    printf("Enter %d elements in the array:\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }


    delete_element(A,num);
    num--;
    display(A,num);

    return 0;
}
