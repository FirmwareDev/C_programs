#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=10;
    int n,o;
    int *z; int *ab;
    printf("Show Basic declaration of pointers in C:\n");
    printf("-------------------------------------------------------\n");
    z=&m;
    printf("z stores the address of m         =       0x%p",z);
    printf("\n*z stores the value of m          =      %d",*z);
    printf("\n&m is the address of m            =       0x%p",&m);
    printf("\n&n stores the address of n        =       0x%p",&n);
    printf("\n&o  stores the address of o       =       0x%p",&o);
    printf("\n\n");

    m=29;
    printf("\nAddress of m : %p",&m);
    printf("\nValue of m : %d",m);

    ab=&m;
    printf("\nNow ab is assigned with the address of m.");
    printf("\nAddress of pointer ab :  0x%p",ab);
    printf("\nContent of pointer ab :  %d",*ab);

    *ab=34;
    printf("\nThe value of m assigned to 34 now");
    printf("\nContent of pointer ab/ m :  %d",m);




    return 0;
}
