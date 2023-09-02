//return type and passing arguments

#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b, c;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    // c = sum(a, b);
    printf("\nthe sum of %d and %d = %d", a, b, sum(a,b));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = b + a;
    return a+b;
}