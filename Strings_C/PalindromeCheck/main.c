#include <stdio.h>
#include <stdlib.h>


/*compare the strings
1. compare each element of the two string arrays
2. if they are not equal, break
3. if they are equal, print equal
4. if greater than or less than print smaller or greater
*/


int compare(char *A,char *B)
{
    int i,j;
    for(i=0,j=0; A[i]!='\0' && B[i]!='\0'; i++, j++)
    {
        if(A[i] != B[j])
            break;
    }
    if(A[i] == B[j])
        printf("Equal Strings\n");

    if(A[i] < B[j])
        printf("First string is smaller!\n");

    if(A[i] > B[j])
        printf("First string is greater!\n");


    return 0;
}




/*A string is Palindrome if the reverse of the string is same as the original string.
ex-> madam, gig, eye
1. Reverse
2. compare
 */



int isPalindrome(char *A)
{
    int i,j;
    for(j=0;A[j] !='\0';j++){}

    j=j-1;

    for(i=0; i<j;i++,j--)
    {
        if(A[j] != A[i])         // when the two characters/index values are not equal break the loop, else keep checking!
            break;
    }
    printf("The given string is a Palindrome!\n");

    return 0;
}

int main()
{
    char A[] = "madam";
    char B[] = "Painting";

    compare(A,B);
    isPalindrome(A);


    return 0;
}
