#include <stdio.h>
#include <stdlib.h>



/*  1.Take a string as input
    2. Take each character from the string to check
    3. if vowel, increment vcount(vowel count)
    4. else increment ccount(consonant count)
    5. print the total count of vowel and consonant
*/

/* Vowels - 'a', 'e', 'i', 'o', 'u'  or 'A', 'E', 'I', 'O', 'U' */

int main()
{

    char A[] = "How are you";
    int i, Vcount=0,Ccount=0;

    for(i=0; A[i] != '\0'; i++)
    {
        if(A[i] == 'a' || A[i] == 'e' ||
           A[i] == 'i' || A[i] == 'o' ||
           A[i] == 'u' || A[i] == 'A' ||
           A[i] == 'E' || A[i] == 'I' ||
           A[i] == 'O' || A[i] == 'U')
        {
            Vcount++;
        }
        else if((A[i] >=65 && A[i] <=90) ||
                (A[i] >=97 && A[i] <=122)
                )
        {
            Ccount++;
        }
    }
    printf("Vowel count is %d and Consonant count is %d",Vcount,Ccount);
    return 0;
}
