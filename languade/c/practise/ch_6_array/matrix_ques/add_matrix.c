// #include <stdio.h>
// int main()
// {
//     int num1[4], num2[4], sum[4], temp[4];
//     int y, x;
//     printf("value for 1st matrix\n");
//     for (x = 1; x < 3; x++)
//     {
//         for (y = 1; y < 3; y++)
//         {
//             printf("write the value of matrix[%d] \n", y);
//             scanf("%d", &num1[x, y]);
//         }
//     }
//     printf("value for 2st matrix\n");
//     for (x = 1; x < 3; x++)
//     {
//         for (y = 1; y < 3; y++)
//         {
            
//         printf("write the value of matrix [%d]  \n", y);

//             scanf("%d", &num2[x, y]);
//         }
//     }
//     printf("addition of 1st and 2st matrix\n\n ans is @@\n\n");
//     for (x = 1; x < 3; x++)
//     {
//         for (y = 1; y < 3; y++)
//         {
//             sum[x, y] = num1[x, y] + num2[x, y];
//         }
//     }

//     printf("value of sum matrix\n");
//     for (x = 1; x < 3; x++)
//     {
//         for (y = 1; y < 3; y++)
//         {
//             printf("%d  ", sum[x, y]);
//             if (y==x-1)
//             {
//                printf("\n\n");
//             }
//         }
//     }
//     return 0;
// }


#include <stdio.h>
#include<conio.h>
int main() {
    int a[3][3],i,j,b[3][3],c[3][3];
    printf("Enter your first matrix elements\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("number : ");
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter your second matrix elements\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("number : ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("your new matix is :"); 
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            c[i][j]= a[i][j]+b[i][j];
            printf(" , %d ",c[i][j]);
        }
    }
return 0;
getch();
}