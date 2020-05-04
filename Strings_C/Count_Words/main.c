#include <stdio.h>
#include <stdlib.h>

/* Scan through the string check for the spaces! For a condition where there are more white spaces between words, also
check if the previous character is not a space*/

int main()
{
    char A[] = "How are  you";
    int i, word = 0;

    for(i=0; A[i] != '\0'; i++)
    {
        if(A[i] == ' ' && A[i-1] != ' ')
        {
            word++;
        }
    }
    printf("The word count is: %d\n",word+1);
    return 0;
}
