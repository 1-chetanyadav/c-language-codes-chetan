#include <stdio.h>
#include<stdlib.h>
add(int *address ,int *data);
delete(int *address ,int *data);
show(int *address ,int *data);
int main()
{

    int arr[2], size, a;
    int a;
    char ch;
    //-size to check overflow
    //-a and -ch to make choice in main menu
    // by god
struct linked_list
{
    int data;
    int location;
}linkedlist;


    printf("Enter size of lists : \n");
    scanf("%d", &size);
    int *ptr;
    ptr = (int)(size * sizeof(arr));
    printf("The size of list = %d",*ptr);
    do
    {
        printf("\n\nMENU\n1> ADD\n2> Delete\n3> SHOW\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            top = push(arr, &top, size);
            break;

        case 2:
            top = pop(arr, &top);
            break;

        case 3:
            transpose(arr, top);
            break;
        }
        printf("\nDo you want to perform more ops ? y / n \n");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

add(int *address, int *data){
    int 
}
delete (int *address, int *data);
show(int *address, int *data);