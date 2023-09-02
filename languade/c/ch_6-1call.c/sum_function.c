#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("write the value for a\n");
    scanf("%d", &a);
    printf("write the value for b\n");
    scanf("%d", &b);
    sum(a, b);
        return 0;
}

int sum(int a, int b)
{
    printf("write the value for a amd b is : %d",a+b);
    return a + b;
}