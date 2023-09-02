#include <stdio.h>
int main()
{
    int a, b;
    FILE *ptr;
    // ptr = fopen("sample.txt", "w"); >create
    ptr = fopen("sample.txt", "r"); //>create
    fscanf(ptr, "%d", &a);
    fscanf(ptr, "%d", &b);
    printf("%d\n", a);
    printf("%d", b);
    fclose(ptr);
    return 0;
}