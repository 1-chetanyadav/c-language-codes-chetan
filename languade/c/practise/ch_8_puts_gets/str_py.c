 #include<stdio.h> 
 #include<string.h>
int main (){
char name[12];
char name2[12];
printf("write your name ");
gets( name);
strcpy(name2,name);
printf("%s \n",name2 );
return 0;
}