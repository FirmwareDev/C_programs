#include <stdio.h>
#include <stdlib.h>

char *stringReverse(char *s)
{
    int i,temp;
    char *A = (char*)malloc(20*sizeof(char));
    A = s;
    int j;

    for(j=0;A[j]!='\0';j++)
    {

    }
    j=j-1;
    while(i<j)
    {
        temp = A[j];
        A[j] = A[i];
        A[i] = temp;

        i++;
        j--;
    }


    return s;
}

int isPalindrome(char *s)
{
  int i=0,j;

  for(j=0; s[j] != '\0'; j++)
  {

  }
  j=j-1;
  while(i<=j)
  {
      if(s[i] != s[j])
      {
          return -1;
      }
      i++;
      j--;

  }
  return 0;

}

int main()
{
    char A[] = "Welcome to programming";
    char P[] = "liril";
    printf(" The reverse of the given string is : %s \n",stringReverse(A) );
    if(isPalindrome(P) != 0)
    {
        printf("The given string is  not a palindrome!\n");
    }
    else
    {
        printf("The given string is a palindrome!\n");
    }

    return 0;
}
