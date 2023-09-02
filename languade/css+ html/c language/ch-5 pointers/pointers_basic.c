#include <stdio.h>
int main()
{
    int a;
    int *b = &a;
    printf("the vale of a %d\n", a);
    printf("the vale of b %d\n", *b);
    printf("the adress of a %d\n", &a);
    printf("the adress of b %d\n", b);
    return 0;
}