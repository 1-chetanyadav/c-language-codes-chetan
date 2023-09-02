// no_return type and no_passing arguments
#include <stdio.h>
void sum();
int main()
{

    sum();
    return 0;
}
void sum()
{
    int a, b, c;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = b + a;
    printf("\nthe sum of %d and %d = %d\n", a, b, c);
}