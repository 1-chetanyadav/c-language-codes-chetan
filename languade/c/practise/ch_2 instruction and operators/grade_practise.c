#include<stdio.h>
int main (){
   float grade=0;
   printf("how much percent you scored in 12th\n");
   scanf("%f",&grade);
  if (grade>=90)
{ printf ("you have scored A Grade");    
   }
   else if (grade>=80)
   {printf("you have scored B Grade");}
   else if (grade>=70)
   {printf("you have scored C Grade");}
   else if (grade>=60)
   {printf("you have scored D Grade");}
   else if (grade>=50)
   {printf("you have scored E Grade");}
   else if (grade>=40)
   {printf("you have scored F Grade");}
   else 
   {printf("Better luck next time");}
    return 0;
}