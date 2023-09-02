#include <stdio.h>
int main (){
    int table=10;
    int count=10 ;
    int number;
    printf("the reversed multiplication of 10 is below\n");
    while (count >=0)
    {
        printf("the multiplication of %d*%d is %d\n",table,count,table*count);
        // table--;
        count--;
    }   
    return 0; 
}