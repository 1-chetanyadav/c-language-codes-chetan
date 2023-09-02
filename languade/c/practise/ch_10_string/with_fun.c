#include<stdio.h>
#include<string.h>
int main(){
int m1,m2,m3,c,m4,m5,len1,len2,s;
char name1[15];
char name2[15];
char *result[35];
printf("write name 1\n");
gets(name1);
printf("write name 2\n");
gets(name2);
printf("\n what you want to do\n1>> copy \n2>> compare\n3>> length\n4>>concatenate\n");
scanf("%d",&c);
if (c==1){
printf("we are coping name 1 in name 2\n");
      strcpy(name2, name1);
       puts(name2);
}
else if (c==2){
s=strcmp(name1,name2);
    printf("Comparison result =%d",s);
}
else if (c==3){
len1=strlen(name1);
    printf("Length of first = %d", len1);
len2=strlen(name2);
    printf("Length of second = %d", len2);
}    
else if (c==4)
{
 result[35]=strcat(name1, name2);
    printf("String = %s", result[35]);}

return 0;
}