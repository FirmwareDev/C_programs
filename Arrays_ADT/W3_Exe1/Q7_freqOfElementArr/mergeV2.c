#include <stdio.h>
#include <stdlib.h>


int main()
{
    int A[50],B[50],C[50];
    int i=0,j=0,k=0;
    int num1,num2,num3;

    printf("Enter the number of elements in 1st Array:\n");
    scanf("%d",&num1);

    for(i=0;i<num1;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the number of elements in the 2nd Array:\n");
    scanf("%d",&num2);

    for(j=0;j<num2;j++)
    {
        scanf("%d",&B[j]);
    }

    num3 = num1 + num2;

    while(i<num1 && j<num2)
    {
        if(A[i]<B[j])
        {
            C[k] = A[i];
            k++;i++;
        }
        else
        {
            C[k] = B[j];
            k++;j++;
        }
    }

    for(;i<num1;i++)
        C[k]=A[i];
    for(;j<num2;j++)
        C[k]=B[j];

    printf("Array sorted in ascending order:\n")
    for(k=0;k<num3;k++)
        printf("%d\t",C[k]);
    return 0;
}
