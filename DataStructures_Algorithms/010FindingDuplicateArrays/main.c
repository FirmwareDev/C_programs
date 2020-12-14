#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int i,duplicate;

    printf("Enter the elements:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("The array elements are:\n");

    for(i=0;i<6;i++)
    {
        printf("%d",A[i]);
    }


    printf("The duplicate numbers : \n ");
    i=duplicate=0;
    while(i<6)
    {
        if(A[i] == A[i+1] && A[i] != duplicate)
        {
            printf("%d",A[i]);
            duplicate = A[i];
        }
        i++;
    }



    return 0;
}
