#include <stdio.h>
int main()
{
    int input;
    int  output=0 ;
    printf("write a number =>");
    scanf("%d", &input);
    do

    {
        printf("%d\n", output);
        output++;
    } while (output <= input);
    return 0;
}