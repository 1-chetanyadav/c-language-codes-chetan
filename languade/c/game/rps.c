#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[5], i = 0, a, b, r, p, c;
    int comp, user = 0;
    int rock, paper, scissors;
    char name1[20];
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'c';
    }
    puts("what is your name:");
    gets(name1);
    printf("this is  rock paper scissors game\n\nlets start\n\n");
    printf("%d\n", number);

    for (i = 0; i < 2; i++)
    {
        printf("\nwhat will you choose\n1 >rock\n2 >paper\n3> scissors\n");
        scanf("%d", &user);
        if (user == 1 && comp == 'r')
        {
            printf("\ncomputer choose rock \n\n");
            printf("##>> draw\n");
        }
        else if (user == 1 && comp == 'p')
        {
            printf("\ncomputer choose paper\n\n");
            printf("##>> computer wins\n");
        }
        else if (user == 2 && comp == 's')
        {
            printf("\ncomputer choose scissor \n\n");
            printf("##>> you win\n");
        }
        else if (user == 2 && comp == 'r')
        {
            printf("\ncomputer choose rock \n\n");
            printf("##>> draw\n");
        }
        else if (user == 2 && comp == 'p')
        {
            printf("\ncomputer choose paper\n\n");
            printf("##>> draw\n");
        }
        else if (user == 2 && comp == 's')
        {
            printf("\ncomputer choose scissor \n\n");
            printf("##>> computer win\n");
        }
        else if (user == 3 && comp == 'r')
        {
            printf("\ncomputer choose rock \n\n");
            printf("##>> computer win\n");
        }
        else if (user == 3 && comp == 'p')
        {
            printf("\ncomputer choose paper\n\n");
            printf("##>> you win\n");
        }
        else if (user == 3 && comp == 's')
        {
            printf("\ncomputer choose scissor \n\n");
            printf("##>> draw\n");
        }

        else
        {
            printf("type  1.2.3.");
        }
    }
    return 0;
}