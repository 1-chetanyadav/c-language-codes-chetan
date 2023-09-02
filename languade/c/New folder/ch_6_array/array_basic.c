//check that can we change in build array value
#include <stdio.h>
int main()
{
    int a[] = {44, 22, 33, 55};
    printf("print the a (i) %d\n", a[3]);
    printf("a1 > %d \n", a[1]);
    printf("new of a1>", a[1]);
    scanf("new of a1> %d \n", &a[1]);
    printf("new a1 > %d \n", a[1]);
    return 0;
}