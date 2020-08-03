#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int *A;
    int i,num;

    printf("Enter the number of elements:\n");
    scanf("%d",&num);

    A=(int*)malloc(num*sizeof(int));

    printf("Enter the elements:\n");

    for(i=0;i<num;i++)
    {
        scanf("%d",(A+i));
    }

    for(i=0;i<num;i++)
    {
        if(*(A)<*(A+i)){
            *A=*(A+i);
        }

    }
    printf("%d",*A);
    free(A);

    return 0;
}
