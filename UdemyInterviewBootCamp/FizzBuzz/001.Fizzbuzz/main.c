#include <stdio.h>
#include <stdlib.h>

/** \Question
Program that prints the numbers from 1 to 100. But for multiples of 3 print "Fizz
instead of the number and for the multiples of 5 print "Buzz".
For numbers multiples if both three and five print "FizzBuzz"

 */

int main()
{
    int i;
    printf("Printing the numbers from 1-100\n");
    for(i=1;i<=100;i++)
    {
        if((i%3 == 0) && (i%5 == 0))
        {
            printf("FizzBuzz\n");
        }
        else if(i% 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(i%5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }

    }
    return 0;
}
