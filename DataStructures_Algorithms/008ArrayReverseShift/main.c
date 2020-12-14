#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int length;
    int size;
};

void display(struct array ar)
{
    int i;
    for(i=0;i<ar.length;i++)
    {
        printf("%d\t",ar.A[i]);
    }
    printf("\n");
}

/*
void reverseArr1(struct array *ar)
{
    int B[10];
    int i,j=0;
    for(i=ar->length-1;i>=0;i--,j++)
    {
        B[j] = ar->A[i];
    }

    for(i=0;i<ar->length;i++)
    {
        ar->A[i]=B[i];
    }
}
*/

void reverseArr2(struct array *ar)
{
    int i=0,j=ar->length-1,x;
    while(i<j)
    {
        x= ar->A[i];
        ar->A[i]=ar->A[j];
        ar->A[j]=x;

        i++;
        j--;
    }
}

// to do: implement shifting function.

int main()
{
    struct array ar = {{2,3,4,5,6,7},6,10};
    printf("Elements in the array:\t");
    display(ar);
//    printf("Elements after reversing the array Method 1:");
//    reverseArr1(&ar);
//    display(ar);
    printf("Elements after reversing the array Method 2:");
    reverseArr2(&ar);
    display(ar);
    return 0;
}
