// print name and address ::
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int  i = 0, n=0 ,con =0;
    printf("write a name \n");
    gets(name);
    n=strlen(name);
    for ( i = 0; i < n; i++)
    {
       printf("address of %c is >> %u\n ",name[i], &name[i]);
    }
    
    
    return 0;
}