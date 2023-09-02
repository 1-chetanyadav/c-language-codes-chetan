#include <stdio.h>
int main()
{
    float amount, rate, year;
    printf("what is the amount?\n", amount);
    scanf("%f", &amount);
    printf("On which the rate?\n", rate);
    scanf("%f", &rate);
    printf("For how year?\n",year);
    scanf("%f",&year);
    printf(" the intrest is %f", (amount * rate * year)/100);
    return 0;
}