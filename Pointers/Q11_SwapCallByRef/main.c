#include <stdio.h>
#include <stdlib.h>



int reverse_string(char *A,int stLength)
{
    int i,j,temp;
    for(i=0,j=stLength-1 ;i<j ;i++,j--)
    {
            temp=*(A+i);
            *(A+i)=*(A+j);
            *(A+j)=temp;
    }

return *A;
}

void display(char *A, int stLength)
{
    int i=0;
    printf("The reverse string :");
    while(*(A+i) != '\0')
    {
        printf("%c",*(A+i));
        i++;
    }
    printf("\n");
}

int main()
{
    char A[50];
    int i=0,count=0;

    printf("Enter the string :");
    gets(A);

    while(*(A+i) != '\0')
    {
        count++;i++;
    }
    printf("The length of the string : %d\n",count);

    reverse_string(A,count);
    display(A,count);
    //printf("Hello world!\n");
    return 0;
}
