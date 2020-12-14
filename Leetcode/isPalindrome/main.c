#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool isPalindrome(int x){

    int reverseX=0, rem=0;
    if(x<0 || x==0)
        return 1;
    else
    {
        while(x!=0)
        {
        rem = x %10;
        reverseX= (int)(reverseX *10) + rem;
        x = x/10;
        }
        if(x != reverseX)
            return 1;
        else
            return 0 ;
    }

}

int main()
{
    printf("%d\n", isPalindrome(-121));
    return 0;
}
