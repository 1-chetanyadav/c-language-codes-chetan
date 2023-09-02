// odd even?

/* modulo.c */
#include <stdio.h>

int main(void)
{
    int odd, even, user;
    int x;
    printf("type a number : ");
    scanf("%d", &user);

    if (user % 2 == 0)
        printf("%d is even\n", user);
    else
    {
        printf("%d is odd\n", user);
    }
    return 0;
}
