 #include<stdio.h> 
int main (){
    char a;
    FILE *pptr;
    pptr = fopen("all str.txt", "r");
    a=fgetc(pptr);
    while (a!=EOF)
    {
        printf("%c", a);
        a = fgetc(pptr);
    }
    return 0;
}