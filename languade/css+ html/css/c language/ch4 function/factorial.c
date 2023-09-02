#include <stdio.h>
int factorial(int i);
int main()
{
    int i;
    printf("write a value of (-->a) to be going to factorial ");
    scanf("%d", &i);
    printf("factorial of %d is %d\n",i, factorial(i));
    
    printf("good bye");
    int factorial ();
    return 0;
}
int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    else  
    {
        return i * factorial(i - 1);
        // printf("the factorial is %d\n", factorial(i));
    }
}
