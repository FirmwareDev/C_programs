#include <stdio.h>
#include <stdlib.h>

/* Anagrams are two set of strings formed using same set of alphabets
eg: "decimal" and "medical".

Method 1: Time complexity= O(n^2)
1. check whether the strings of equal sizes. We assume in this case!
2. Two arrays, perform linear search on one of the string.
3. check for duplicates.

Method 2: Time complexity= O(n)
using hashing technique!

 */



int main()
{

    char A[]="decimal";
    char B[]="medical";
    int i;
    int H[26] = {0};     // we are considering only the small alphabets here!

    for(i=0; A[i]!='\0';i++)
    {
        H[A[i]-97] +=1 ;  // add 1 to the index corresponding to the alphabet in the Hashing array i.e H[]
    }

    for(i=0;B[i]!='\0';i++)
    {

        H[B[i]-97] -= 1;  // if the letter is found in B[], decrement the count in H[]
        if(H[A[i]-97]<0)   // check if the count is negative in H[]
        {
            printf("Not an Anagram\n");   //if even a single char doesn't match, come out of the loop no further comparison needed.
            break;
        }
        if(B[i] == '\0')
        {
          printf("Its an Anagram!\n");
        }

    }

    return 0;
}
