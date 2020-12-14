#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
    char buf[MAX];
    char *s;
    int i=0;
    while(1)
    {
        printf("Enter the character:\n");
        fgets(buf,MAX,stdin);
        s=&buf[0];
        i++;
        if(*s == 'a')
        {
            printf("Enter the character:\n");
            fgets(buf,MAX,stdin);
            s=&buf[0];
            i++;
            if(*s == 'b')
            {
                printf("Enter the character:\n");
                fgets(buf,MAX,stdin);
                s=&buf[0];
                i++;
                if(*s == 'c')
                {
                    printf("pattern found end the input stream!");
                    break;
                }
            }

        }

    }

    printf("Hello world!\n");
    return 0;
}
