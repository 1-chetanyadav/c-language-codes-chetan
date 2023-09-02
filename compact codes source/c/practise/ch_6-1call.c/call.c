#include <stdio.h>
float c(int price, float inter);
int main()
{
    int price, inter;
    printf("type a price to add interest : ");
    scanf("%d", &price);
    c(price, inter);
    return 0;
}
// #### method 1
float c(int n1, float n2)
{
    n2 = n1 * 14 / 100;
    printf("%f", n2);
    return n2;
}

// #### method 2
// float c(int price, float inter)
// {
//     inter = price * 14 / 100;
//     printf("%f", inter);
//     return inter;
// }