#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    int i, word = 1, k = 0;
    printf("write your string ");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            word++;
            i++;
        }
        else
        {
            k++;
        }
    }
    puts(name);
    printf(" has %d words\n", word);
    return 0;
}