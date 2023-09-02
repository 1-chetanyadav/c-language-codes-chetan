 #include<stdio.h> 
int main (){
    int a,b;
    FILE *ptr;
    //ptr = fopen("sample.txt", "w"); //>create ,overwrite
    ptr = fopen("sample.txt", "r"); //>doesn't create
    fscanf(ptr,"%d",&a);
    printf("%d\n", a);
    fclose(ptr);
    return 0;
}