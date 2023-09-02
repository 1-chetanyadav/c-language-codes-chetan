#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int generaterandomno(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }

    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }

    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    for (int i = 0; i < 3; i++)
    {
        // players input

        printf("player turns\n");
        printf("enter 1 for rock,2 for paper,3 for scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose %c\n", playerchar);

        // comp input

        printf("\n__computer turn\n");
        temp = generaterandomno(3) + 1;
        compchar = dict[temp - 1];
        printf("__You chose %c\n", compchar);

        if (greater(playerchar, compchar) == 1)
        {
            compscore += 1;
            printf("computer got this round\n");
        }
        else if (greater(playerchar, compchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("it is draw\n");
        }
        else
        {
            playerscore += 1;
            printf("player got this round\n");
        }
        printf("player score is %d \n and comp score is %d\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("lodu tu jeet gaya kush mt ho\n");
    }
    else if (playerscore < compscore)
    {
        printf("Bsdk ke kabhi to jeet jaao hamesa haroge kya\n");
    }
    else
    {
        printf("Bhenchood draw ho gya\n");
    }
    return 0;
}