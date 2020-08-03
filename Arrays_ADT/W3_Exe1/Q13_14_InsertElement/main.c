#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to insert New value in the array (unsorted list/sorted list ) */
int Insert_Element(int *A,int num)
{
    int i,x,numAdd;
    printf("Enter the index to insert the element:\n");
    scanf("%d",&x);
    printf("Enter the number to be added:\n");
    scanf("%d",&numAdd);
    for(i=num-1;i>=0;i--)
    {
        A[i+1]=A[i];
        if(i==x)
        {
            A[i]= numAdd;
            break;
        }
    }
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
    int A[50];
    int i,num;

    printf("Enter the number of elements:\n");
    scanf("%d",&num);

    printf("Enter %d elements in the array:\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }

    Insert_Element(A,num);
    num++;
    display(A,num);


    return 0;
}
