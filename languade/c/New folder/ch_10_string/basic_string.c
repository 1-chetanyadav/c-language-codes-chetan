#include <stdio.h>
int main()
{
    char a;
    char b[15];
    char c[15];
    scanf("%c", &a);
    scanf("%s", b);
    gets(c);
    printf("%c \n", a);
    printf("%s \n", b);
    puts(c);
    return 0;
}

// #include<stdio.h>  
// void main ()  
// {  
//     char s[20];  
//     printf("Enter the string?");  
//     scanf("%s",s);  
//     printf("You entered %s",s);  
// } 