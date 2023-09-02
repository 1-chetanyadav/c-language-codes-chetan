#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 5, b = 9;
    // printf("the value of a and b is", a, b);
    printf("the ans is %d", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}