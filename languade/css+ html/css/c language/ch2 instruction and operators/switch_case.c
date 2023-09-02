#include <stdio.h>
int main()
{
    int rating = 0;
    printf("Thanks for using OYO\nPlease give rating to our serives ( 1 our of 5) \n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf(" your rating is 1");
        break;

    case 2:
        printf("your rating is 2");
        break;
    case 3:
        printf("your rating is 3");
        break;
    case 4:
        printf("your rating is 4");
        break;
    case 5:
        printf("your rating is 5");
     break;
        default:
        printf("error (invalid program) ");
        break;
    }
    return 0;
}