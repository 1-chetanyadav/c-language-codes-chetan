#include <stdio.h>
int main()
{
    int  c, o=0, tem, i, m=0, m4, m5, n, len1, len2, count = 0, count2 = 0, s;
    char name1[15];
    char k;
    char name2[15];
    char *result[35];
    printf("write name 1\n");
    gets(name1);
    printf("write name 2\n");
    gets(name2);
    printf("\n what you want to do\n1>> copy \n2>> compare\n3>> length\n4>> concatenate\n");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("we are coping name 1 in name 2\n");
        name2[15] = name1[15];
        puts(name2);
    }
    else if (c == 2)
    {
        for (i = 0; name1[i] != '\0'; i++)
        {
            name1[i] = k;
            k = n;
            m = n + m;
        }
        for (i = 0; name2[i] != '\0'; i++)
        {
            name2[i] = k;
            k = n;
            o = n + o;
        }
         if (m == o)
        {
            printf("result 0 >> congrats dono same likh di\n     kya kar raha hai bhai ");
        }
        else if (m > o)
        {
            printf("Comparison result +ve ");
        }

        else
        {

            printf("Comparison result -ve ");
        }
    }
    else if (c == 3)
    {
        for (i = 0; name1[i] != '\0'; i++)
        {
            count++;
        }
        printf("Length of first = %d\n", count);
        for (i = 0; name2[i] != '\0'; i++)
        {
            count2++;
        }
        printf("Length of second = %d", count2);
    }
    else if (c == 4)
    {
        printf("%s", name1);
        printf("%s", name2);
    }

    return 0;
}