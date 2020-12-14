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

int linearSearch(struct array ar, int key)
{
    int i;
    for(i=0;i<ar.length;i++)
    {
        if(ar.A[i] == key)
            return i;
    }
    printf("Element no found!");
    return -1;

}
int main()
{
    struct array ar = {{2,3,4,5},4,10};

    int x = linearSearch(ar,4);
    display(ar);
    printf("Element found at index: %d",x);

    return 0;
}
