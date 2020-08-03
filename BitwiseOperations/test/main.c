#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};


void display(struct array a)
{
    int i;
    for(i=0;i<a.length;i++)
    {
        printf("\n",a.A[i]);
    }

}


int main()
{
    struct array a;
    int i;
    printf("Enter the size of an Array:\n");
    scanf("%d",a.size);
    a.A=(int*)malloc(a.size*sizeof(int));

    a.length =0;   //number of elements

    printf("Enter how many numbers:\n");
    scanf("%d",a.length);

    printf("Enter the elements:\n");
    for(i=0;i<a.length,i++)
    {
        scanf("%d",&a.A[i]);
    }

    display(a);
    return 0;
}
