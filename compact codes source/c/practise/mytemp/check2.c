#include <stdio.h>
int main()
{
    long n, rev = 0;
    int r, a;
    printf("digit are\ninput is:");
    scanf("%ld", &n);
    printf("\noutput is:\n");
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
        printf("%ld\n", rev);
    }
    return 0;
}