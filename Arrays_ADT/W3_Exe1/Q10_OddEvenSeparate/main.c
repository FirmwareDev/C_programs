#include <stdio.h>
#include <stdlib.h>

int main()
{

    static int A[50],odd[50],even[50];
    int i,j,num,eCount=0,oCount=0;

    printf("Enter the number of element:\n");
    scanf("%d",&num);

    printf("Enter the elements:\n");

    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0,j=0;i<num;i++)
    {
        if(A[i]%2 == 0)
        {
            even[j]=A[i];
            eCount++;
            j++;
        }
        else
        {
            odd[i]=A[i];
            oCount++;
            continue;
        }
    }

    printf("The array of even elements:\n");
    for(i=0;i<eCount;i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\nThe array of odd elements:\n");
    for(i=0;i<oCount;i++)
    {
        printf("%d\t",odd[i]);
    }
    return 0;
}
