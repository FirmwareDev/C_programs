#include <stdio.h>
#include <stdlib.h>

int main()
{
    char var=100;
    char* pVar1=&var;
    printf("Address of the variable: %p\n",&var);

    char value = *pVar1;             // read operation
    printf("read value is: %d",value);

    *pVar1 = 65;
    printf("\nmodified read value is: %d",var);

    return 0;
}
