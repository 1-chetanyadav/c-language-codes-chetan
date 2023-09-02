#include <stdio.h>
int main()
{
    int real;
    int ideal;
  
    printf("type a number for four natural number \n", real);
    scanf("%d", &real);
      ideal = real-4 ;
    while (ideal < real)
    {
        --real;
        printf("%d\n", real);

    }

    return 0;
}

// printf("write a value\n");
//     scanf("%d",&input);
//     input--;
//     printf("\n%d\n",input);
//     input--;
//     printf("%d\n",input);
//     input--;
//     printf("%d\n",input);
//     input--;
//     printf("%d\n",input);