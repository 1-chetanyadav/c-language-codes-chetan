// #include <stdio.h>

// int main (){
// int a,star,stop ;
// printf("how much star?you want\n");
// scanf("%d\n",&stop);
// while(star<stop)
// {
// printf("*\n");
// star++;
// }

// return 0;
// }
//how to sum 3 number?  
// while (a != 0) {


// #include <stdio.h>

// int main() 
// {
//     long long int a = 0, b = 0, c = 0;

//     std::cin >> a >>b >> c;

//     long long int sum = 0;
//     long long int product = 1;

//     for ( int num : { a, b, c } )
//     {
//         const long long int Base = 10;
//         do
//         {
//             long long int digit = num % Base;

//             if ( digit < 0 ) digit = -digit;

//             sum += digit;
//             if ( product ) product *= digit;
//         } while ( num /= Base );
//     }

//     std::cout << "sum = " << sum << '\n';
//     std::cout << "product = " << product << '\n';

//     return 0;
// }  


//how to add two number in vscode?                  
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    uint32_t a;

    printf("Enter number 1: ");
    scanf("%d", (uint16_t *)(&a));

    printf("Enter number 2: ");
    scanf("%d", ((uint16_t *)(&a))+1);

    printf("%d\n", a);

    printf("Sum = %"PRIu32"\n", (uint32_t)(*(uint16_t *)(&a)) + *(((uint16_t *)(&a)) + 1));

    return 0;
}




