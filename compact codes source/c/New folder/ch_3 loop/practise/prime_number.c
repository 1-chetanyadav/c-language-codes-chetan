#include <stdio.h>
int main()
{
    int prime = 0;
    int number;
    int count = 2;
    int input;
    printf("type a number you want to check\n");
    scanf("%d", &input);
    while (count < input)
    {
        if (input % count == 1)
        {
            printf("%d and %d = %d",input,count,input % count);
            count++;
            prime = 1;
            printf(" prime number\n");
            break;
        }

        else
        {
            printf("not prime number\n");
            break;
        }
    }
    return 0;
}