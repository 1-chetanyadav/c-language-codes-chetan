#include <stdio.h>
int minus(int a, int b);
int main()
{
    int c,a,b;
    printf("value of a");
    scanf ("%d",&a);
    printf("value of b");
    scanf("%d",&b);
    c=minus (a,b);
    printf("the subtration of a and b is %d", c);

    return 0;
}
int minus(int a, int b)
{ int c;

    c = a - b ;
    return c;
}