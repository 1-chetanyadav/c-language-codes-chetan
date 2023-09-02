// print name and address ::
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int  i = 0, n=0 ,con =0;
    printf("write a name \n");
    gets(name);
    puts(name);
    printf("address is >> %u ", &name);
    return 0;
}