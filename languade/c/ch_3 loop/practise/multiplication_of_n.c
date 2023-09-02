#include <stdio.h>
int main(){
    int n;
    int count=0;
    int number=10;
    printf("\n\nwrite a number for a multipication \n");
    scanf("%d",&n);
    while (count<=number)
    {
      
printf("the multipication of %d*%d = %d\n",n,count,n*count);
  count++;
    }
    return 0;

}