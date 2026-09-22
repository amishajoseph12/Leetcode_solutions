#include <stdio.h>

int main()
{
    int m, n, i, j;
    int a[n][m], b[n][m], c[n][m];

    printf("Enter how many rows: ");
    scanf("%d", &n);

    printf("Enter how many columns: ");
    scanf("%d", &m);

    printf("Enter first matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
