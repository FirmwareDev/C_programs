#include <stdio.h>
#include <stdlib.h>

/* Write a function to get each character from the user and print string found when 's','a','f' is passed.

 create a queue, insert the character, check for the string, dequeue.
 */


int validate(char *name)
{
    int i; char temp[10];
    for(i=0; name[i] !='\0'; i++)
    {
        if(*name == 'saa')
        {
            temp[i] = name[i];
        }
    }
    printf("the string found, function ends! %s",temp[i]);
    return 0;
}


int main()
{

    char *name;
    printf("enter the characters ");
    scanf("%c",name);

    validate(name);

    printf("Hello world!\n");
    return 0;
}
