# Two Sum
#Given an array of integers and a target value, find the indices of two numbers whose sum equals the target.
#Return the indices of the two numbers. The same element cannot be used twice.

#include <stdio.h>

int main()
{
    int nums[50], integer, i, j, n;

    printf("how many nos?");
    scanf("%d", &n);

    printf("enter nos:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("enter target:");
    scanf("%d", &integer);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == integer)
            {
                printf("the indices are %d, %d", i, j);
                return 0;
            }
        }
    }

    printf("not found");
    return 0;
}
