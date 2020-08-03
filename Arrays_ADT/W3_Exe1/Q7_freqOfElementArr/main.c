#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[50],B[10];
    int i=0,n,j;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);

    char temp[4]= {'s','a','a','\0'};

    for(i=0;i<n;i++)
    {
        scanf("%c\n",&A[i]);
        for(j=i;j<n;j++)
        {
         if(A[i] == temp[j])
         {

            printf("String SAA found!\n");
            break;
         }
        }
    }

    //printf("Hello world!\n");
    return 0;
}
