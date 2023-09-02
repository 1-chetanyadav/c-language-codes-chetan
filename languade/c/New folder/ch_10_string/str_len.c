 #include<stdio.h> 
 #include<string.h>
int main (){
char name[12];
printf("write a name ");
gets( name);
puts(name);
printf("your name has %d words ",strlen(name));
return 0;
}