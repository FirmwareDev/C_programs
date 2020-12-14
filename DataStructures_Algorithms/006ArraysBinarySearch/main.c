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
        printf("%d\n",ar.A[i]);
    }
}
int BinarySearch(struct array ar, int key)
{
    int i,l,h,mid;
    l=0;
    h=ar.length-1;
    mid = (l+h)/2;

    while(l<=h)
    {
       if(key == ar.A[mid])
            return mid;
        else if(key < ar.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }

    return -1;
}

int main()
{
    struct array ar = {{2,3,4,5},4,10};

    printf("Element found at index %d\n", BinarySearch(ar, 3));
    display(ar);
    return 0;
}
