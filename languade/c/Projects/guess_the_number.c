#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int number, badluck = 0;
    int guess, count, level, players;
    int retry = 0;
    char name1[20], name2[20];

    srand(time(0));

    printf("\n--------------------------------------------------------\n\nThis is a number guessing game\nWe have generated a random number you have to guess it\n\n\nChoose level --(ans in 1,2,3)--\nEASY-->(1)\nNORMAL-->(2)\nHARD-->(3)\n", level);
    scanf("%d", &level);

    printf("\n--PLAYERS--\nSingle Player-->(1)\n");
    scanf("%d", &players);
    if (players == 1)
    {
        printf("Type your name here :");

        scanf("%s", &name1);
        // printf("%s ", name1);
    }

    if (level == 1)
    {
        number = rand() % 50 + 1;

        do
        {
            printf("\n %s your number is between 1-50\n\n        TYPE YOUR GUESS  ->", name1);
            scanf("%d", &guess);
            if (guess == number)
            {
                if (badluck <= 0)
                {

                    printf("\n\n**********************************************\nYou Performed Amazing \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 1)
                {
                    printf("\n\n**********************************************\n\n\nYou did very well (;\n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 3)
                {
                    printf("\n\n**********************************************\n\n\nYou did average\n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 6)
                {
                    printf("\n\n**********************************************\n\n\nYou did good \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 8)
                {
                    printf("\n\n**********************************************\n\n\nBetter luck next time \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else
                {
                    printf("\n\n**********************************************\n\n\nTry try but don't cry\n\n you did in %d try\n\n**********************************************\n", badluck);
                    break;
                }
            }
            else if (guess < number)

            {
                count++;

                badluck++;
                printf("\n@@ ~~ Enter Greater number ~~ \n ");

                if (count == 15)
                {

                    printf("\nretry number is:%d,\n and level is :%d\n\nRETRY -->(0)\nEXIT--(1)\n", count, level);
                    scanf("%d", &retry);
                }
            }

            else if (guess > number)
            {
                badluck++;
                count++;
                printf("\n@@ ~~ Enter Small number ~~ \n");

                if (count == 105)
                {

                    printf("\nretry number is:%d,\n and level is :%d\n\n\nRETRY -->(0)\nEXIT--(1)\n", count, level);
                    scanf("%d", &retry);
                }
            }

            else
            {
                printf("what are you typing bro +_+");
            }

        } while (count < 112);
    }

    if (level == 2)
    {
        number = rand() % 100 + 1;
        do
        {
            printf("\n%s your number is between 1-100\n\n        TYPE YOUR GUESS  ->", name1);
            scanf("%d", &guess);
            if (guess == number)
            {
                if (badluck <= 0)
                {
                    printf("\n\n**********************************************\nYou Performed Amazing \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 1)
                {
                    printf("\n\n**********************************************\n\n\nYou did very well (;\n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 3)
                {
                    printf("\n\n**********************************************\n\n\nYou did average\n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 6)
                {
                    printf("\n\n**********************************************\n\n\nYou did good \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 8)
                {
                    printf("\n\n**********************************************\n\n\nBetter luck next time \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else
                {
                    printf("\n\n**********************************************\n\n\nTry try but don't cry\n\n you did in %d try\n\n**********************************************\n", badluck);
                    break;
                }
            }
            else if (guess < number)

            {
                count++;

                badluck++;
                printf("\n@@ ~~ Enter Greater number ~~ \n ");
                // \n\nRETRY-- > (1)\nEXIT--(0)\n

                if (count == 105)
                {

                    printf("\nretry number is:%d,\n and level is :%d\n\nRETRY -->(0)\nEXIT--(1)\n", count, level);
                    scanf("%d", &retry);
                }
            }
            else if (guess > number)
            {
                badluck++;
                count++;
                printf("\n@@ ~~ Enter Small number ~~ \n");

                if (count == 15)
                {
                    printf("\nretry number is:%d,\n and level is :%d\n\n\nRETRY -->(0)\nEXIT--(1)\n", count, level);
                    scanf("%d", &retry);
                }
            }
            else
            {
                printf("what are you typing bro +_+");
            }

        } while (count < 112);
    }
    if (level == 3)
    {
        number = rand() % 200 + 1;

        do
        {
            printf("\n %s your number is between 1-200\n\n        TYPE YOUR GUESS  ->", name1);
            scanf("%d", &guess);
            if (guess == number)
            {
                if (badluck <= 0)
                {
                    printf("\n\n**********************************************\nYou Performed Amazing \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 1)
                {
                    printf("\n\n**********************************************\n\n\nYou did very well (;\n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 3)
                {
                    printf("\n\n**********************************************\n\n\nYou did average\n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 6)
                {
                    printf("\n\n**********************************************\n\n\nYou did good \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else if (badluck <= 8)
                {
                    printf("\n\n**********************************************\n\n\nBetter luck next time \n\nyou done this in %d try\n\n**********************************************\n", badluck);
                    break;
                }
                else
                {
                    printf("\n\n**********************************************\n\n\nTry try but don't cry\n\n you did in %d try\n\n**********************************************\n", badluck);
                    break;
                }
            }
            else if (guess < number)

            {
                count++;

                badluck++;
                printf("\n@@ ~~ Enter Greater number ~~ \n\n ");

                if (count == 112)
                {

                    printf("\nretry number is:%d,\n and level is :%d\n\nRETRY -->(0)\nEXIT--(1)\n", count, level);
                    scanf("%d", &retry);
                }
            }

            else if (guess > number)
            {
                badluck++;
                count++;
                printf("\n@@ ~~ Enter Small number ~~ \n");

                if (count == 102)
                {

                    printf("\nretry number is:%d,\n and level is :%d\n\n\nRETRY -->(0)\nEXIT--(1)\n", count, level);
                    scanf("%d", &retry);
                }
            }

            else
            {
                printf("what are you typing bro +_+");
            }

        } while (count < 102);
    }

    // else if (level == 2)
    // {
    //     number = rand() % 100 + 1;
    //     do
    //     {

    //         printf("%s your number is between 1-100\n        TYPE YOUR GUESS  ->   ");
    //         scanf("%d", &guess);
    //         if (guess == number)
    //         {
    //             printf("\n\nWOW You are the Perfectionist ,\n You Performed Fucking Amazing\n");
    //         }
    //         else if (guess < number)
    //         {
    //             badluck++;
    //             printf("\n\nThink Big *_*\nDo Big\nDream Big\n\n\nRETRY -->(0)\nEXIT--(0)\n ");
    //             scanf("%d", &retry);
    //             if (retry = 1)
    //             {
    //                 retry = 1;
    //             }
    //         }
    //         else if (guess > number)
    //         {
    //             badluck++;
    //             printf("\n\nYour Guess is Greater than the Number\n\nRETRY -->(0)\nEXIT--(0)\n");
    //             scanf("%d", &retry);
    //             if (retry = 1)
    //             {
    //                 retry = 1;
    //             }
    //         }

    //         else
    //         {

    //             printf("\n%d", number);
    //         }
    //     } while (retry = 1);
    // }

    // else if (level == 3)
    // {
    //     number = rand() % 200 + 1;
    //     do
    //     {
    //         printf("%s your number is between 1-200\n        TYPE YOUR GUESS -> ");
    //         scanf("%d", &guess);
    //         if (guess == number)
    //         {
    //             printf("\n\nWOW You are the Perfectionist ,\n You Performed Fucking Amazing\n");
    //         }

    //         else if (guess < number)
    //         {
    //             badluck++;
    //             printf("\n\nThink Big *_*\nDo Big\nDream Big\n \n\nRETRY -->(0)\nEXIT--(0)\n");
    //             scanf("%d", &retry);
    //             if (retry = 1)
    //             {
    //                 retry = 1;
    //             }
    //         }
    //         else if (guess > number)
    //         {
    //             badluck++;
    //             printf("\n\nYour Guess is Greater than the Number\n\nRETRY -->(0)\nEXIT--(0)\n");
    //             scanf("%d", &retry);
    //             if (retry = 1)
    //             {
    //                 retry = 1;
    //             }
    //         }
    //         else if (guess == number + -10)
    //         {
    //             printf("you are close\n\n\nRETRY -->(0)\nEXIT--(0)\n");
    //             scanf("%d", &retry);
    //             if (retry = 1)
    //             {
    //                 retry = 1;
    //             }
    //         }
    //         else if (guess = number -= 10)
    //         {
    //             printf("You are close\n\n\nRETRY -->(0)\nEXIT--(0)\n");
    //             scanf("%d", &retry);
    //             if (retry = 1)
    //             {
    //                 retry = 1;
    //             }
    //         }
    //         else
    //         {
    //             printf("\n%d\n", number);
    //         }
    //     } while (retry = 1);
    // }
    else
    {
        printf("select an option 1,2,3");
    }
    return 0;
}
