#include <stdio.h>
int main()
{
    int total, input;

    printf("\nfrom where to start ", input);
    scanf("%d", &input);
    total = input + 200;
    while (input <= total)
    {

        printf("\n%d\n", input);
        input++;
        input++;
    }
    return 0;
}