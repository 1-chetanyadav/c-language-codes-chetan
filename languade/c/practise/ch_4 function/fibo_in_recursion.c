#include <stdio.h>
int fibonacci(int f);
int main()
{
    int n, f = 0, i;
    printf("Enter number");
    scanf("%d", &n);
    printf("Fibonacci series terms are:");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(f));
        f++;
    }
    return 0;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}