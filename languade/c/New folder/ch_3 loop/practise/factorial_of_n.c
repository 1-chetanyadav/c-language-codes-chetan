#include <stdio.h>
int main (){
    int factorial;
    int start;
    int end;
    printf("what is the last digit where you want to stop factorial\n");
    scanf("%d",&end);
    for ( start = 1; start <= end; start++)
    {
        start*end;
        factorial=start*end;
    }
    printf("the factorisl is %d",factorial);
    return 0;
}