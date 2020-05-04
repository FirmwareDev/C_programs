#include <stdio.h>
#include <stdlib.h>


/* Finding duplicates using bitwise operator:
Steps:
1. Bit left shift (<<)
2. Bits ORing (Merging)
3. Bits ANDing (Masking)

1 byte= 8 bits ->    MSB                                LSB
                     ___  ___  ___  ___  ___  ___  ___  ___

                     128  64   32   16    8    4    2    1

 A variable defined as: char H = 0,

            H ->     0    0     0    0   0    0    0    0       <- Binary rep

                        char H = 1,

            H->      0    0     0    0   0    0    0    1       <-Binary rep
 */

int main()
{

    char A[] ="finding";
    int H=0, x=0;
    int i;

    for(i=0;A[i] != '\0';i++)
    {
        x = 1;
        x = x << (A[i] - 97);  // small alphabets start from ASCII value 97
// in the example for 'f' (102 - 97)
        if((x & H )> 0)
        {
            printf("%c is a duplicate\n",A[i]);
        }
        else
             H =(x | H);
    }
    return 0;
}
