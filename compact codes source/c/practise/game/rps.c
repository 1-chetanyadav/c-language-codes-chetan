#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[5], i = 0, a, b, r, p, c;
    int user = 0;
    int rock, paper, scissors;
    char name1[20];
    char comp;
    int s1 = 0, s2 = 0;

    puts("what is your name:");
    gets(name1);
    // printf("this is  rock paper scissors game\nlets start");
    // printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("\n\npress any key :::\n");
        getch();
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
            comp = 's';
        }
        printf("\nwhat will you choose\n1 >rock\n2 >paper\n3> scissors\n");
        scanf("%d", &user);
        if (user == 1 && comp == 'r')
        {
            printf("\n********\n\nyou choose rock");
            printf("\ncomputer choose rock \n\n");
            printf("##>> draw\n");
        }
        else if (user == 1 && comp == 'p')
        {
            printf("\n********\n\nyou choose rock");
            printf("\ncomputer choose paper\n\n");
            printf("##>> computer wins\n");
            s2++;
        }
        else if (user == 1 && comp == 's')
        {
            printf("\n********\n\nyou choose rock");
            printf("\ncomputer choose scissors\n\n");
            printf("##>> you wins\n");
            s1++;
        }
        else if (user == 2 && comp == 's')
        {
            printf("\n********\n\nyou choose paper");
            printf("\ncomputer choose scissor \n\n");
            printf("##>> computer win\n");
            s2++;
        }
        else if (user == 2 && comp == 'r')
        {
            printf("\n********\n\nyou choose paper");
            printf("\ncomputer choose rock \n\n");
            printf("##>> you win\n");
            s1++;
        }
        else if (user == 2 && comp == 'p')
        {
            printf("\n********\n\nyou choose paper");
            printf("\ncomputer choose paper\n\n");
            printf("##>> draw\n");
        }
        else if (user == 2 && comp == 's')
        {
            printf("\n********\n\nyou choose ");
            printf("\ncomputer choose scissor \n\n");
            printf("##>> computer win\n");
        }
        else if (user == 3 && comp == 'r')
        {
            printf("\n********\n\nyou choose scissor");
            printf("\ncomputer choose rock \n\n");
            printf("##>> computer win\n");
            s2++;
        }
        else if (user == 3 && comp == 'p')
        {
            printf("\n********\n\nyou choose scissor");
            printf("\ncomputer choose paper\n\n");
            printf("##>> you win\n");
            s1++;
        }
        else if (user == 3 && comp == 's')
        {
            printf("\n********\n\nyou choose scissor");
            printf("\ncomputer choose scissor \n\n");
            printf("##>> draw\n");
        }

        else
        {
            printf("\ntype  1.2.3.\n");
        }
    }
    if (s1 > s2)
    {
        printf("\n####\nYOU WON \n");
    }
    else
    {
        printf("\n####\nCOMPUTER WON \n");
    }
    return 0;
}