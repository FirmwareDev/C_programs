#include <stdio.h>
#include <stdlib.h>



/*  Write a program in C to merge two arrays of same size sorted in descending order */

static int A[50],B[50],C[50];

void Merge_ascend();

void Merge_SameSize();

void swap_num(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{

    int flag;
    printf("Enter the method 1 or 2 (0 0r 1):\n");
    scanf("%d",&flag);
    if(flag==0)
    {
     Merge_ascend(&A[50],&B[50],&C[50]);
    }
    else{
       Merge_SameSize(&A[50],&B[50]);
    }

    return 0;
}

void Merge_SameSize(int *A,int *B)
{
    int C[50], num1,num2,num3,i,j;
    printf("Enter the number of elements in Array 1:\n");
    scanf("%d",&num1);

    printf("Enter %d elements in Array 1:\n",num1);
    for(i=0;i<num1;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the number of elements in Array 2:\n");
    scanf("%d",&num2);
    printf("Enter %d elements in Array 2:\n",num2);
    for(i=0;i<num2;i++)
    {
        scanf("%d",&B[i]);
    }
    /* Merging the two arrays into 3rd array*/

    num3=num1+num2;

    for(i=0;i<num1;i++)
    {
        C[i]=A[i];
        C[i+num2]= B[i];
    }

    printf("The merged array is :\n ");
    for(i=0;i<num3;i++)
    {
        printf("%d\t",C[i]);
    }

    /* Sorting the array in descending order*/
    for(i=0;i<num3;i++)
    {
        for(j=i+1;j<num3;j++)
        {
            if(C[i]<C[j])                       // for ascending order the relational operator is '>'
            {
                swap_num(&C[i],&C[j]);
            }
        }
    }

    printf("\n The array sorted in descending order is:\n");
    for(i=0;i<num3;i++)
    {
        printf("%d\t",C[i]);
    }

}


void Merge_ascend(int *A,int *B,int *C)
{
    int i=0,j=0,k=0;
    int num1,num2,num3;

    printf("Enter the number of elements in 1st Array:\n");
    scanf("%d",&num1);

    for(i=0;i<num1;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nEnter the number of elements in the 2nd Array:\n");
    scanf("%d",&num2);

    for(j=0;j<num2;j++)
    {
        scanf("%d",&B[j]);
    }

    i=0;j=0;

    while(i<num1 && j<num2)
    {
        if(A[i]<B[j])
        {
            C[k++] = A[i++];
            continue;
        }
        else
        {
            C[k++] = B[j++];
            continue;
        }
    }

    for(;i<num1;i++)
    {
       C[k++]=A[i];
    }
    for(;j<num2;j++)
    {
        C[k++]=B[j];
    }
    num3 = num1 + num2;
    printf("Array sorted in ascending order:\n");
    for(k=0;k<num3;k++)
        {
             printf("%d\t",C[k]);
        }

}
