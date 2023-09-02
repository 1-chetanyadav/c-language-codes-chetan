#include <stdio.h>
int main()
{
    float radi,height;
    float two=2;
    float pie = 3.14;
    printf("what is the height of your cylinder\n",height);
    scanf("%f", &height);
    printf("what is the radi of your cylinder\n",radi);
    scanf("%f", &radi);
    printf("the area of cylinder is %f", height * radi * pie*two );
    return 0;
}

// for responsive
// int height;
// int radi;
// float pie=3.14;
// printf("what is the height of cylinder \n ",height);
// scanf("%d",height);
// printf("what is the radi of circle \n ",radi);
// scanf("%d",radi);
// printf("the area of cylinder is %f",height*radi*pie);