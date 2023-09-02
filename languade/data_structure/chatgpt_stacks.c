#include <stdio.h>

int push(int arr[], int *top, int size);
int pop(int arr[], int *top);
void transpose(int arr[], int top);

int main()
{
    int arr[20], size, a;
    char ch;
    int top = -1;

    printf("Enter size of stack: ");
    scanf("%d", &size);
    printf("top = %d\n", top);

    do
    {
        printf("\nMENU\n1>push\n2>pop\n3>transpose\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            top = push(arr, &top, size);
            printf("top = %d\n", top);
            break;

        case 2:
            top = pop(arr, &top);
            printf("top = %d\n", top);
            break;

        case 3:
            transpose(arr, top);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

        printf("\nDo you want to perform more ops? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

int push(int arr[], int *top, int size)
{
    if (*top == size - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        (*top)++;
        printf("Enter element to push: ");
        scanf("%d", &arr[*top]);
        printf("arr[%d] = %d\n", *top, arr[*top]);
    }
    return *top;
}

int pop(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Popped element is %d\n", arr[*top]);
        (*top)--;
    }
    return *top;
}

void transpose(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements after transposition: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
