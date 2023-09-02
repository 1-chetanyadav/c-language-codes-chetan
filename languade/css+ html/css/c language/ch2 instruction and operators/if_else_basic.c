#include <stdio.h>
int main()
{
    int age;
    printf("what is your age ?\n ", age);
    scanf("%d", &age);
    if (age <= 17 || age >= 80)
    {
        printf("You can't drive\n ");
    }
    else
    {
        printf("You can drive");
    }
    return 0;
}