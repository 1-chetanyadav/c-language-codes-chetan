// to count the number of vowels , spaces ,symbols and constrain ::
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int back = 0, wow = 0, con = 0, sym = 0, i = 0, n;
    printf("write a name \n");
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            wow++;
        }
        else if (name[i] == ' ')
        {
            back++;
        }
        else if (name[i] == '$' || name[i] == '&' || name[i] == '#' || name[i] == '@')
        {
            sym++;
        }
        else
        {
            con++;
        }
    }
    printf("    has >> \nvowels :%d\nconstrain :%d\nspace :%d \nsymbols :%d", wow, con, back, sym);
    return 0;
}