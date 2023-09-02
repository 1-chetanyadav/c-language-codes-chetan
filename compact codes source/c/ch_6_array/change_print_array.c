 #include<stdio.h> 
int main (){
int a[]={110,450,650,850};
int i;
for (i=0; i < 4; i++)
{
    printf("%d\n",a[i]);
}
printf("write a value for 450 you want to change");
scanf("%d",&a[1]);
printf("the value now is %d",a[1]);
return 0;
}