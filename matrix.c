#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;

    // First matrix
    printf("\nEnter first matrix (3x3):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Second matrix
    printf("\nEnter second matrix (3x3):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] =   c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n"); // To separate rows
    }

    return 0;
}

