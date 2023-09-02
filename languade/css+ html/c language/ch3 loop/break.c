#include <stdio.h>
int main()
{
    int count = 100;
    int input = 0;
    int brreak;
    printf("write a number for which you want to break\n");
    scanf("%d", &brreak);
    while (count >= input)
    {
        printf("--->%d\n", input);
        input++;
        if (input == brreak)
        {
            printf("::::>>%d", brreak);
            break;
        }
    }
    return 0;
}