 #include<stdio.h> 
 #include <string.h>
struct test{
    int number;
    char name[6];
};

int main (){
    int a=3;
    char c='m';

    struct test t;
    t.number=1;
     // e1.name = "Harry"; --> wont work
    strcpy(t.name,"itachi");
    
printf("%d\n", t.number);
printf("%s\n", t.name);
return 0;
}