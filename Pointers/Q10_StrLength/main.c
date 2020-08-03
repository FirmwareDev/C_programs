#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program in C to Calculate the length of the string using a pointer. */

int main()
{
    char A[20];
    int i=0, count=0;
    printf("Enter the string:");
    gets(A);

    while(*(A+i) != '\0')
    {
        count++;
        i++;
    }

    printf("\n The length of the string entered is : %d",count);
    return 0;
}
