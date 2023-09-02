 #include<stdio.h> 
int main (){
int basic,gross,hra,da;
printf("what is your basic salary\n");
scanf("%d",&basic);
hra=basic*10/100;
da=basic*50/100;
gross=basic+hra+da;
printf("gross is %d",gross);
return 0;
}