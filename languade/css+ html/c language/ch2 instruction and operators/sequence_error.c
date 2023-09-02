#include <stdio.h>
int main()
{

    int a = 2, b = 4;
    int z = a + b;
    // 1 -->   wrong--> int a+b=z;
    // 2 -->   if u use 3.5 as int then c consider it as 3
    // as same for float
    //   3 --> computer don't follow BODMAS
    printf("the value of a+b is %d", z);
    return 0;
}