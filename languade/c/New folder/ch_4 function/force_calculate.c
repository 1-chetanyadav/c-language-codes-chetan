#include <stdio.h>
float force(float mass);
int main()
{
    float mass;
    printf("write the value of mass\n");
    scanf("%f", &mass);
    printf("the value of force is %f", (force(mass)));
    return 0;
}
float force(float mass)
{

    float result = (mass)*9.8;

    return result;
}