#include<stdio.h>
int main (){
    int income;
    printf("type your total income of a year\n");
scanf("%d",&income);

 if (income>=250000 && income<=500000)
{
   printf("you have to pay %d tax",((income-250000)*5)/100);
}
else if (income>=500000 && income<=1000000)
{
   printf("you have to pay %d tax",((income-250000)*10)/100);
}
else if (income>=100000 )
{
   printf("you have to pay %d tax",((income-250000)*20)/100);
}
 else
{
   printf("don't pay tax");
}
return 0;
}