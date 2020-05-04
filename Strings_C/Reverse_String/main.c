#include <stdio.h>
#include <stdlib.h>


int reverse (char *P);

/*There are multiple methods to reverse a string.
1. using two arrays.
    a. use 'i' as an index variable and reach to the end of the first array
    b. start copying the contents of the 1st array into 2nd array from the last char in the string
    c. decrement the index*/

int main()
{
    char A[] = "python";
    char B[10];
    int i,j;
    for(i=0; A[i]!='\0';i++){}

    i=i-1;               //the last element location before '\0' char is assigned to 'i' after looping through the for loop once

    for(j=0;i>=0;j++,i--)
    {
        B[j] = A[i];
    }

    B[j]='\0';   //we need to terminate the new array with a NULL character.
    printf("the reverse string 1st method: %s\n",B); //to print the entire string we do need to pass B[j], only B is fine!
    reverse(A);

    return 0;
}


/* Second method to reverse a string without a new array
    1. use two index variable-> i,j
    2. i-> beginning of the array, j-> end of an array
    3. swap the char at index i with j, increment i, decrement j
 */

 int reverse (char *P)
 {
     int i,j,t;
     for(j=0;P[j]!='\0';j++){}

     j=j-1;

     for(i=0;i<j; i++, j--)
     {
         t    = P[i];
         P[i] = P[j];
         P[j] = t;
     }
     printf("the reverse string second method: %s\n",P);
     return 0;
 }

