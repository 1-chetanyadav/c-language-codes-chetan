 #include<stdio.h> 
 #include<string.h>
int main (){
char name[12];
char name2[12];
printf("write a name ");
gets( name);
gets( name2);
strcat(name,name2);
printf("%s",name);
return 0;
}