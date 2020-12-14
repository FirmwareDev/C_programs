#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int length;
    int size;
};

void display(struct array ar)
{
    int i;
    printf("The elements in the array are:\n");
    for(i=0;i<ar.length;i++)
    {
        printf("%d\n",ar.A[i]);
    }
}


int main()
{
    struct array arr;
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);

    arr.length= 0;

    arr.A= (int*)malloc(n*sizeof(int));

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;

    display(arr);
    return 0;
}
