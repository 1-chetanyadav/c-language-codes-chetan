 #include<stdio.h> 
void wrong_swap();
void swap();
int main (){
int a,b,c;
printf("value for a");
scanf("%d",&a);
printf("value for b");
scanf("%d",&b);
wrong_swap(a,b);
// swap(&a,&b);
return 0;
}
void wrong_swap(int a,int b){
    int temp;
    b=temp;
    a=b;
    temp=a;
printf("the value is %d and %d",a,b);
}
// void swap(a,b){
//     int temp;
//     temp=a;
//     a=b;
//     printf("the value is %d and %d",&a,&b);
// }