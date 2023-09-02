#include <stdio.h>
int main()
{

    FILE *ptr;
    ptr = fopen("sample_str.txt", "r");
    char a = fgetc(ptr);
    getc(a);
    fclose(ptr);
    return 0;
}