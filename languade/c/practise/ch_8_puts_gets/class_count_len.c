// to count the number char without fun.  ::
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int  i = 0, n=0 ,con =0;
    printf("write a name \n");
    gets(name);
    for (i = 0; name[i]!='\0'; i++)
    {
      
        if (name[i] != '\0' )
        {
            n++;
        }
    }
    printf("has >> %d ", n);
    return 0;
}