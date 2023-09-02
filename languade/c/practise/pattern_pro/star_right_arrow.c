#include <stdio.h>
int main()
{
    int a, b, i, c, d;
    printf("\n\n");
    for (i = 0; i < 5; i++)
    {
        for (a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b = 5; b > 0; b--)
    {
        for (c = 0; c < b; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}