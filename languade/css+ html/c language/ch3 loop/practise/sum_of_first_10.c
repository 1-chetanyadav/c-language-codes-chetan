#include <stdio.h>
int main()
{
    int numbers = 0;
    int start=1;
    int end;
    printf("type a number below to sum all integers from 1-n\n");
    scanf("%d", &end);
    while (start <= end)
    {
        numbers +=start;
        start++;
        // printf("the sum of all integers are %d \n ", numbers); -->choice
        
    }
    printf("the sum of all integers are %d \n ", numbers);
    return 0;
}
