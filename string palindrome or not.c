#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], rev[100];
    int i, j, len;

    printf("Enter string: ");
    scanf("%s", s);

    len = strlen(s);

    j = 0;

    for(i = len - 1; i >= 0; i--)
    {
        rev[j] = s[i];
        j++;
    }

    rev[j] = '\0';

    if(strcmp(s, rev) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
