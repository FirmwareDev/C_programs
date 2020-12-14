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
void append(struct array *ar, int value)  // since the function will modify the structure, we "pass it by address"
{
    if(ar->length < ar->size)
        ar->A[ar->length++] = value;

}
void insert(struct array *ar, int index, int value)
{
    int i;
    if(index>=0 && index<ar->length)
    {
        for(i=ar->length;i>index;i--)
        {
                ar->A[i]= ar->A[i-1];
        }
        ar->A[index] = value;
        ar->length++;
    }
    else
        printf("Invalid index\n");
}
int deleteElement(struct array *ar, int index)
{
    int x,i;
    x = ar->A[index];
    for(i=index;i<ar->length-1;i++)
    {
        ar->A[i] = ar->A[i+1];
    }
    ar->length--;
    return x;
}

int main()
{
    struct array arr = {{2,3,4,5},4,10};

    printf("The elements in the array:\n");
    display(arr);
    append(&arr,6);
    printf("Elements in the array after append:\n");
    display(arr);
    insert(&arr,4,8);
    printf("elements in the array after insert:\n");
    display(arr);
    int x = deleteElement(&arr,2);
    printf("Elements in the array after deleting:\n");
    display(arr);
    printf("the element deleted is %d",x);
    return 0;
}
