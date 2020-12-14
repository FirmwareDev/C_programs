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

int get(struct array ar, int index)
{
    if(index>=0 && index<ar.length)
        return ar.A[index];

    return-1;
}

void set(struct array *ar, int index, int value)
{
    if(index>=0 && index<ar->length)
        ar->A[index] = value;
}

int sum(struct array ar)
{
    int i=0,sum=0;

    while(i < ar.length)
    {
      sum += ar.A[i];
      i++;
    }
    return sum;
}

int max(struct array ar)
{
    int i, max=0;
    for(i=0;i<ar.length;i++)
    {
        if(ar.A[i]> max)
            max = ar.A[i];
    }
    return max;
}

int avg(struct array ar)
{
    int i, max=0;
    for(i=0;i<ar.length;i++)
    {
        if(ar.A[i]> max)
            max = ar.A[i];
    }
    return max/2;
}

int main()
{
    struct array ar = {{2,3,4,5,6,7},6,10};
    display(ar);
    printf("The element obtained by get function:%d\n",get(ar,2));
    set(&ar,2,10);
    display(ar);
    printf("Sum of all the elements in the array: %d\n",sum(ar));
    printf("The max of all the elements in the array:%d\n",max(ar));
    printf("The average of all the elements in the array:%d\n",avg(ar));
    return 0;
}
