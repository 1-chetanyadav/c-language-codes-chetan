// to count the number of vowels , spaces and constrain ::
#include <stdio.h>
#include <string.h>
int main()
{
    char *name;
    int back = 0, wow = 0, con = 0, i = 0, n = 0;
    printf("write a name \n");
    gets(name);
    n = strlen(name);
    for (i = 0; i < n; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            wow++;
        }
        else if (name[i] == ' ')
        {
            back++;
        }
        else
        {
            con++;
        }
    }
    printf("has >> \n\nvowels :%d\nconstrain :%d\nspace :%d ", wow, con, back);
    return 0;
}