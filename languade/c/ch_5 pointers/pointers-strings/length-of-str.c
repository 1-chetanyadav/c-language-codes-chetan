#include <stdio.h>

int main()
{
    int c;
    char a[20] = "harrypotter";
    char *ptr;
    ptr = a;
    for (c = 0; *ptr != '\0'; c++)
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
