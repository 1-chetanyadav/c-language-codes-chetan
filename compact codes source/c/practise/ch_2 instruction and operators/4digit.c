#include <stdio.h>
int main()
{
    int a, b, c, d;

    // int c1 a b c d;
    printf("enter your 4 numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is big", a);
            }
        }
    }

    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is big", b);
        }
    }

    else if (c > d)
    {
        printf("%d is big", c);
    }

    else
    {
        printf("%d is big", d);
    }

    return 0;
}