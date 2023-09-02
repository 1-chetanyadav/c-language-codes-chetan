#include <stdio.h>
int main()
{
    int age = 0;
    int entry = 1;
    int yes = 0;
    // int no = 0;
    // char d = 0;
    printf("If you want to enter PUB \nEnter your age?\n\n", age);
    scanf("%d", &age);
          printf("\nDO you have royal pass?\n no = 0\nyes = 1 \n",entry);
        scanf("%d", &entry);
    if (age <= 17 && entry ==0)
    // {
    //     printf("DO you have royal pass?\n no = 0\nyes = 1 \n",entry);
    //     scanf("%d", &entry);

    //     if (entry ==1)
    //     {
    //         printf("you are allowed\n");
    //     }
        // else if (entry == 0)
        {
            printf("you are not allowed kido\n");
        }
    
        else
        
        //  (age >= 18)
        {
            printf("You are allowed\nPlease enter ");
        }
    
    return 0;
}