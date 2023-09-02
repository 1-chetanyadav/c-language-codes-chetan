 #include<stdio.h> 
 #include <string.h>
struct company{
    int number;
    char name[6];
};

int main (){
    int number,name,a=3;
    char c='m';

    struct company ;
    number=1;
     // e1.name = "Harry"; --> wont work
    strcpy(name,"itachi");
    
printf("%d\n", number);
printf("%s\n", name);
return 0;
}