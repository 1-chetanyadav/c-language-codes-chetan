#include <stdio.h>
int main (){
    int table=8;
    int count=1;
    int number;
printf("the sum of all 8 multiplication table is below\n");
while (count<=10)
{
    table*count;
    count++;
    table+=8;
    number=table*count;
}
printf("the sum is %d",number);

return 0;
}