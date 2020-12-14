#include <stdio.h>
#include <stdlib.h>

/* Method 1 without  */
#if 0
int main()
{
    int A[] = {2,4,5,12};
    int B[] = {3,5,6,8,9,11};
    int C[20];
    int i=0,j=0,k=0;

    int sizeA = sizeof(A)/ sizeof(A[0]);
    int sizeB = sizeof(B)/ sizeof(B[0]);
    int sizeC=0;
    while(i<sizeA && j<sizeB)
    {
        if(A[i]<B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    for(;i<sizeA;i++)
    {
        C[k++] = A[i];
    }

    for(;j<sizeB;j++)
    {
        C[k++] = B[j];
    }

    sizeC = sizeA + sizeB;
    printf("Elements in the third array after merging:\n");
    for(k=0;k<sizeC;k++)
    {
       printf("%d\t",C[k]);
    }

    return 0;
}
#endif // 0

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

struct array* mergeArr(struct array *arA,struct array *arB )
{
    int i=0,j=0,k=0;
    struct array *arC = (struct array*)malloc(sizeof(struct array)); //object created in heap, it can be returned and used in the main()
    while(i<arA->length && j<arB->length)
    {
        if((arA->A[i]) < (arB->A[j]))
            arC->A[k++] = arA->A[i++];
        else
            arC->A[k++] = arB->A[j++];
    }

    for(/*this field is blank to start i from wherever it is*/ ;i<arA->length;i++)
        arC->A[k++]= arA->A[i];

    for( ; j<arB->length; j++)
        arC->A[k++] = arB->A[j];

    arC->length = arA->length + arB->length;

    return arC;
}

int main()
{
    struct array arrA = {{2,4,5,12},4,10};
    struct array arrB = {{3,5,6,8,9,11},6,10};
    struct array *arrC;

    arrC = mergeArr(&arrA,&arrB);
    display(*arrC);
    return 0;
}
