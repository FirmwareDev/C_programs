#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to store elements in an array and print it */

int main()
{
    int A[10],i;
    printf("Enter the elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nThe elements in the array are:");
    printf("\t");
    for(i=0;i<10;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}
