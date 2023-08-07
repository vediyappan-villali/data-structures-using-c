// C program to understand stack using array

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];

int top = -1;

void push(int item);
int pop();
int peek();
int is_empty();
int is_full();
void display();

int main()
{
    int op;
    int item;

    while(1)
    {
        printf("\nStack operations...\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display the top element\n");
        printf("4. Display all stack elements\n");
        printf("5. Quit\n");

        printf("\nEnter the option: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                printf("\nEnter the item to be pushed: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                item = pop();
                printf("Popped item = %d\n", item);
                break;
            case 3:
                printf("Item at the top = %d\n", peek());
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exited\n");
                exit(EXIT_SUCCESS);
            default:
                printf("\nInvalid option entered. Please enter valid option.\n");
        }
    }
    return 0;
}

void push(int item)
{
    if(is_full())
    {
        printf("Stack overflow\n");
        return;
    }
    top = top+1;
    stack[top] = item;
}

int pop()
{
    int item;

    if(is_empty())
    {
        printf("Stack underflow\n");
        return -1;
    }

    item = stack[top];
    top = top-1;
    return item;
}

int peek()
{
    if(is_empty())
    {
        printf("Stack underflow\n");
        return -1;
    }

    return stack[top];
}

int is_full()
{
    if(top == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display()
{
    int i;

    if(is_empty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("\nStack elements: ");
    for(i=top; i>=0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n\n");
}
