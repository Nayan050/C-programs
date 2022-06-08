#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 4

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main()
{
    int value, choice;
    while (1)
    {
        printf("\n\n**MENU*\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\n Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted:");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n Wrong selection !!! Try Again!!!");
        }
    }
}
void push(int value)
{
    if (top == SIZE - 1)
        printf("\n Stack is Full!! Insertion is not possible!!");
    else
    {
        top++;
        stack[top] = value;
        printf("\nInsertion success!!!");
    }
}
void pop()
{
    if (top == -1)
        printf("\n Stack is Empty!! Deletion is not possible!!");
    else
    {
        printf("\n Deleted: %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
        printf("\n Stack is empty!!");
    else
    {
        int i;
        printf("\nStack elements are:\n");
        for (i = top; i >= 0; i++)
            ;
        printf("%d\n", stack[1]);
    }
}