#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to read n number of values in an array and display it in reverse order. */


int main()
{
    int A[50];
    int i,n=0;

    printf("Enter the number of elements in an array:");
    scanf("%d",&n);

    printf("\nEnter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        printf("\n");
    }

    printf("\nThe elements in the array in reverse order:");
    printf("\t");

    for(i=n-1;i>=0;i--)            // n-1, since n-> is the number of elements and we want to start from the index [n-1]
    {
        printf("%d\t",A[i]);

    }
    return 0;
}
