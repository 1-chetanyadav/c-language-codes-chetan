#include <stdio.h>
int fibo();
int main()
{
    int a = 0, b = 1,f;
    printf("write a no. to stop the seq.\n");
    scanf("%d", &f);
    printf("\n%d %d", a, b);
    fibo(f);
    // printf(" \n the value of i is %d \n", i);
    return 0;
}
int fibo(f){
    int a = 0, b = 1, c, i;
    for (i = 2; f > i; i++)
    {
        c = a + b;
        printf("  %d", c);
        a = b;
        b = c;
    }

}