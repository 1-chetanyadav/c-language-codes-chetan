//two dimensional array
#include <stdio.h>
int main()
{
    int a[3][3], x, i, y;
    for (x = 0; 3 > x; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("print the a[%d][%d] = \n", x, y);
            scanf("%d", &a[x][y]);
        }
    }
    for (x = 0; 3 > x; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }
    printf("the value of a[0][0]");
    scanf("%d", &a[0][0]);
        for (x = 0; 3 > x; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }
    return 0;
}