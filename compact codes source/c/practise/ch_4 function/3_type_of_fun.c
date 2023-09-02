// return type and no_passing arguments

#include <stdio.h>
int sum();
int main()
{
    sum();
    return 0;
}
int sum()
{
    int a, b, c;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = b + a;
    printf("\nthe sum of %d and %d = %d", a, b, c);
    return c;
}