#include <stdio.h>
int main()
{

    int profession = 0;
    int bye ;

    // profession = Employe,bussiness,housewife,student;
    printf("\n which group define you in this world?\nselect an option \n \n==>  (1)  Employe \n==>  (2)  business\n==>  (3)  housewife\n==>  (4)  student\n");
    scanf("%d", &profession);
    if (profession == 1 )
    {

        printf("you have to upgrade yourself");
    }
    else if (profession == 2)
    {
        printf(" try to improve it ");
    }
    else if (profession == 3)
    {
        printf(" cook good ");
    }

    else if (profession == 4)
    {
        printf(" be unique like me ");
    }
    else if (bye = 1)
    {
        printf("I wish you good luck on journey");
    }
    else
    {
        printf("i dont known you \n choose an option");
    }

    // else
    // {
    //     printf("who are you ");
    // }

    return 0;
}
