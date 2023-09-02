#include <stdio.h>
int main()
{
    int biomaths, chemistry, physics, english, physicaleducationhindi;
    float cal;

    printf("how many marks you scored in these subject bio/maths,\n");
    scanf("%d", &biomaths);
    printf("how many marks you scored in these subject chemistry\n");
    scanf("%d", &chemistry);
    printf("how many marks you scored in these subjects,physics\n");
    scanf("%d", &physics);
    printf("how many marks you scored in these subjects physicaleducation/hindi\n");
    scanf("%d", &physicaleducationhindi);
    printf("how many marks you scored in these subject english \n");
    scanf("%d", &english);
    cal = biomaths + chemistry + physics + english + physicaleducationhindi;
    if (cal >= 165)
    {
        printf("your percent is %d you are passed\nparty de na bhai", (biomaths + chemistry + physics + english + physicaleducationhindi) / 5);
    }
    else
    {
        printf("your percent is %d and you are failed  looser", (biomaths + chemistry + physics + english + physicaleducationhindi) / 5);
    }
    return 0;
}