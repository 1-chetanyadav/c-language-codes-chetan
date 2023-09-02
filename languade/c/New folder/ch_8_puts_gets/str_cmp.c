 #include<stdio.h> 
 #include<string.h>
int main (){
char name[12];
char name2[12];
int v;
printf("write a name ");
gets( name);
printf("write a name ");
gets( name2);
v=strcmp(name, name2);
printf("%d ", v);
return 0;
}