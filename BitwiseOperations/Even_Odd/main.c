#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/* Function to check even/odd number */

int even_Odd(int a)
{
    if(a & 1)
    {
        printf("the number is odd!\n");
    }
    else
        printf("THe number is even!\n");
    return 0;
}





/* Clearing the bits(making the bit '0' - position 4th, 5th and 6th*/

int clear_bits(int a)
{
    int result;
    result= (a & ~(0x70));
    printf("\nThe bits cleared for the num %x : %x", a, result);
    return 0;
}

/* Toggling the bits- usually for toggling the LEDs */

int toggle(int a)
{
    int LED_State=0;

        LED_State= LED_State ^ 1;

        return 0;
}

int main()
{
    int32_t num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    even_Odd(num);
    Set_bits(num);
    clear_bits(num);
    return 0;
}




