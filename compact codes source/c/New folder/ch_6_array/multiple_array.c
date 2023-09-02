// worst code i have ever seen
#include <stdio.h>
int main()
{
    char *student[3];
    int *marks_c[3], *marks_maths[3], *marks_os[3];
    for (int count = 0; count < 2; count++)
    {
        printf("Enter the name of the student\n");
        scanf("%s", &student[count]);
        printf("Enter the marks in the c language\n");
        scanf("%d", &marks_c[count]);
        printf("Enter the name of the maths\n");
        scanf("%d", &marks_maths[count]);
        printf("Enter the name of the os\n");
        scanf("%d", &marks_os[count]);
    }
    printf("################################\n\n");
    // error in this section
    for (int count2 = 0; count2 < 2; count2++)
    {
        printf("Enter the name of the student >> %s\n", &student[count2]);
        printf("Enter the marks in the c language >> %d\n", marks_c[count2]);
        printf("Enter the name of the maths >> %d\n", marks_maths[count2]);
        printf("Enter the name of the os >> %d\n", marks_os[count2]);
    }
    return 0;
}