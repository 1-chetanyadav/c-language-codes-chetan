#include <stdio.h>
int main()
{

    int Employe=0;
    int bussiness=1;
    int housewife=2;
    int student=3;
    int profession=4;
    // profession = Employe,bussiness,housewife,student;
    printf("which group define you in this world?\nEmploye\nbusiness\nhousewife\nstudent\n");
    scanf("%d", &profession);
    if (profession == 0)
    {
        printf("you have to upgrade yourself");
    }
    else if (profession == 2)
    {
        printf(" cook good ");
    }
   else if (profession == 1businee)
    {
        printf(" try to improve it ");
    } 
    else
    {
        printf(" be unique like me ");
    }

  
    // else
    // {
    //     printf("who are you ");
    // }

    return 0;
}