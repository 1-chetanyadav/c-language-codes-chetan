#include <stdio.h>
int main()
{
    int i, count = 0, Q, start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter Ending number: ");
    scanf("%d", &end);
    printf("\n Prime numbers b/w %d to  %d are: \n", start, end);

    for (i = start; i <= end; i++)
    {
        for (Q = 2; Q < i; Q++)
        {
            if (i % Q == 0)
            {
                count++;
                printf("%d ", i);

                break;
            }
             if (count == 0 && i != 1)
                printf("%d ", i);
            count = 0;
        }
    }
    return 0;
}