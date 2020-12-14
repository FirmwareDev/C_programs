#include <stdio.h>
#include <stdlib.h>


int *func1(int n)
{
    int *p;
    p=(int*)malloc(n* sizeof(int));
    return (p);
}

int main()
{

    int B[]= {2,4,6,7,8,9};
    int i;
    int size= sizeof(B)/sizeof(B[0]);
    printf("\nThe array elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",B[i]);
    }
    int *A;
    A= func1(5);
    printf("Size of A: %d",sizeof(A));

    return 0;
}
