#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to copy the elements of one array into another array. */

int main()

{
    int a[10],b[10];
    int i,n;

    printf("Enter the number of Elements:\n");
    scanf("%d",&n);

    printf("Enter the elements in the 1st array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("\n");
    }

    printf("Elements copied in the 2nd array:");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
    }

    return 0;
}
