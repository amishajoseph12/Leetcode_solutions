#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter string:");
    scanf("%s", s);

    strrev(s);

    printf("%s", s);
}
