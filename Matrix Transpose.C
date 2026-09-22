#include <stdio.h>

int main()
{
    int m, n, i, j;

    printf("Enter how many rows: ");
    scanf("%d", &n);

    printf("Enter how many columns: ");
    scanf("%d", &m);

    int a[n][m];

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose is:\n");

    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
