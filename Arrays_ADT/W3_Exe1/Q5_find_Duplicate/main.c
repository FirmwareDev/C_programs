#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to count a total number of duplicate elements in an array. */

int main()
{
    int A[50];
    int i, n,j,count=0,lastDuplicate=0;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(A[i]==A[j] && A[i] != lastDuplicate)
          {
              lastDuplicate =A[j];
              count++;
              break;
          }
        }
    }
    printf("\n the number of duplicates: %d",count);
 return 0;
}
