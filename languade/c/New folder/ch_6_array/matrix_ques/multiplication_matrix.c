#include <stdio.h>
int main()
{
    int r, a[2][2], b[2][2], c[2][2], i, j, k, sum;
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    // adding two matrices
    for (i = 0; i < 2; ++i)
    {

        for (j = 0; j < 2; ++j)
        {
            sum = 0;
            for (k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }c[i][j]=sum;
        }
        printf("\n\n");
    }
    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            printf("%d   ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}