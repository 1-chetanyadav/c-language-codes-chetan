#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, stop, i;
    printf("write a no. to stop the seq.\n");
    scanf("%d", &stop);
    printf("\n%d %d", a, b);
    // printf(" \n the value of i is %d \n", i);

    for (i = 2; stop > i; i++)
    {
        c = a + b;
        printf("  %d", c);
        a = b;
        b = c;
    }

    return 0;
}