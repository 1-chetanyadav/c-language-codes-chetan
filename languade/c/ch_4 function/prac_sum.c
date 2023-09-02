#include <stdio.h>
float sum(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("write the vale of a\n");
    scanf("%d", &a);
    printf("write the vale of b\n");
    scanf("%d", &b);
    printf("write the vale of c\n");
    scanf("%d", &c);
    printf("the average is %f", sum(a,b,c));
    return 0;
}
float sum(int a, int b, int c)
{
    int result;
    result = (float) (a + b + c) / 3;
    return result;
}