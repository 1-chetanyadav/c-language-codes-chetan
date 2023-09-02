// to count the number of vowels , spaces ,symbols and constrain ::
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    char *ptr; 
    int back = 0, wow = 0, con = 0, sym = 0, i = 0, n;
    printf("write a name \n");
    gets(name);
    ptr = name;
    for (i = 0; *ptr != '\0'; i++)
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            wow++;
            ptr++;
        }
        else if (*ptr == ' ')
        {
            back++;
            ptr++;
        }
        else if (*ptr == '$' || *ptr == '&' || *ptr == '#' || *ptr == '@' || *ptr == '!')
        {
            sym++;
            ptr++;
        }
        else
        {
            con++;
            ptr++;
        }
    }
    printf("    has >> \nvowels :%d\nconstrain :%d\nspace :%d \nsymbols :%d", wow, con, back, sym);
    return 0;
}