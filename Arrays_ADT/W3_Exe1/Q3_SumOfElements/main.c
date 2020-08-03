#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to find the sum of all elements of the array. */

int sum_of_elements(int a[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+ a[i];
    }
    return sum;
}


int main()
{
    int a[10];
    int i,n;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("\n");
    }

    printf("The sum of all elements: %d\n", sum_of_elements(a,n));
    return 0;
}
