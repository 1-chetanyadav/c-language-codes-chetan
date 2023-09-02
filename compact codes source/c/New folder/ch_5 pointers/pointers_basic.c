#include <stdio.h>
int main()
{
    int a = 12;
    int *b = &a;
    int **k = &b;
    printf("the vale of a %d\n", a);
    printf("the vale of b %d\n", *b);
    printf("the address of a %u\n", &a);
    printf("the address of b %u\n", b);
    printf("the address of b %u\n", &b);
    printf("the address of k %u\n", b);
    return 0;
}