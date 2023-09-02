#include <stdio.h>
int main()
{
    float radi;
    float pie = 3.1444444;
    printf("Use only integers (1,2,3,etc)\nwhat is radius of your circle \n", radi);
    scanf("%f", &radi);
    printf("the area of circle is %f", pie * radi * radi);
    return 0;
}