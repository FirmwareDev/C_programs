#include <stdio.h>
#include <stdlib.h>

int main()
{

    char someVar = 100;
    printf("the address: %p", &someVar);

    char *psomePtrVar = &someVar;

    char value = *psomePtrVar;

    printf("\nthe value is : %d",value);

    printf("\nHello world!\n");

    return 0;
}
