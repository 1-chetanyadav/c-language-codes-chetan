#include <stdio.h>
int main()
{

    int a, b;
    // 1 -->   wrong--> int a+b=z;
    // 2 -->   if u use 3.5 as int then c consider it as 3
    // as same for float
    //   3 --> computer don't follow BODMAS
    printf("value for a and b is :");
    scanf("%d %d", &a, &b);
    int z = a + b;
    printf("the value of %d + %d is %d", a, b, z);

    return 0;
}