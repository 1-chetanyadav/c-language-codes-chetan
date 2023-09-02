#include <stdio.h>

int push(int arr[], int *top, int size);
int pop(int arr[], int *top);
int transpose(int arr[], int top);
int main()
{
    int arr[20], size, a;
    int top = -1;
    char ch;
    //-size to check overflow
    //-a and -ch to make choice in main menu
    //by god
    
    printf("Enter size of stack : \n");
    scanf("%d", &size);
    do
    {
        printf("\n\nMENU\n1> push\n2> pop\n3> transpose\n");
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

int push(int arr[20], int *top, int size)
{
    if (*top == size - 1)
    {
        printf("overflow or full");
    }
    else
    {
        (*top)++;
        printf("enter element to push :");
        scanf("%d", &arr[*top]);
        printf("\narr[%d] = %d\n", *top,arr[*top]);
    }
    return *top;
}
int pop(int arr[], int *top)
{
    printf("deleted element =%d", arr[*top]);
    (*top)--;
    return *top;
}
int transpose(int arr[], int top)
{
    if (top == -1)
    {
        printf("underflow or empty\n\n");
    }
    else
    {
        printf("\nElements are :\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d \n", arr[i]);
        }
        printf("\n");
    }
    return 0;
}