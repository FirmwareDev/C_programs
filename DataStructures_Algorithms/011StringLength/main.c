#include <stdio.h>
#include <stdlib.h>

#define MAX 20
/* Find the length of the string */
int countLength(char *s)
{
    int i,count=0;

    for(i=0; s[i] !='\0';i++)
    {
        count++;
    }

    return count;
}

char* upperToLower(char *s)
{
    int i;
    for(i=0; s[i] !='\0';i++)
    {
        s[i]=s[i] + 32;
    }
    //printf("%s",s);

    return s;
}

int countWords(char *s)
{
    int i, word=1;
    for(i=0; s[i] != '\0';i++)
    {
        if(s[i] == ' ' && s[i-1] != ' ')
        {
            word++;
        }
    }

    return word;
}
/* To validate a string - only uppercase, lowercase letters and digits are valid */

int validate(char *s)
{
    int i;
    for(i=0; s[i] != '\0'; i++)
    {
        if( !(s[i] >= 65 && s[i]<=90) &&
            !(s[i]>=97 && s[i]<=122) &&
            !(s[i]>=48 && s[i]<=57) )

        {
            printf("Invalid string!");
            return 0;
        }
    }

    return 1;
}


int main()
{
    char *s;
    char W[MAX]= "how are you" ;
    char a[MAX] ="WELCOME APURVA";
    char Val[MAX] ="Apuv2%3a";


    /* Count the length of string */
    printf("the length of the string is:%d\n",countLength(a));
    /* Convert uppercase to lowercase */
    s = upperToLower(a);
    printf("The string converted from uppercase to lowercase :%s\n",s);
    /* Count the number of words */
    printf("The number of words in the given string: %d\n",countWords(W));
    /* Validate a given string */
    validate(Val);

    return 0;
}
