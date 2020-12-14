#include <stdio.h>
#include <stdlib.h>

void duplicateChar(char *s)
{
    int i=0, duplicate=0, j;
    for(;s[i]!= '\0';i++)
    {
        for(j=i+1;s[j] != '\0';j++)
        {
            if(s[i] == s[j])
            {
                printf("%c\n",s[j]);
            }
        }
    }

}

int main()
{
    char A[] = "Helloo apurva";
    printf("The duplicate characters in the string:\n");
    duplicateChar(A);
    return 0;
}
