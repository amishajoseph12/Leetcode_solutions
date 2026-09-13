#include <stdio.h>

int main()
{
    int num, dig, d, rev, i;

    printf("Enter num:");
    scanf("%d", &num);

    printf("How many digits:");
    scanf("%d", &d);

    rev = 0;

    for (i = 0; i < d; i++)
    {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}
