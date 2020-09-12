#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX], front = 0, rear = 0, i;
void insert();
void delete ();
void display();

void main()
{
    int choice;
    char ch;
    do
    {
        printf("1. Insert \n2. Delete \n3.Display \n4. Exit ");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nCharacter is invalid");
        }
        printf("\nYou went to again Y/N : ");
        scanf("%s", &ch);
    } while (ch == 'Y' || ch == 'y');
}

void insert()
{
    if (rear == MAX)
        printf("\nQueue is full");
    else
    {
        int ele;
        printf("\nEnter a element : ");
        scanf("%d", &ele);
        queue[rear] = ele;
        rear++;
    }
}
void delete ()
{
    if (front == rear)
        printf("\nQueue is empty");
    else
    {
        printf("\nDeleted : %d", queue[front]);
        for (i = 0; i < rear - 1; i++)
            queue[i] = queue[i + 1];
        rear--;
    }
}
void display()
{
    if (front == rear)
        printf("\nQueue is empty");
    else
    {
        printf("\nEnter are : ");
        for (i = 0; i < rear; i++)
            printf("%d\n", queue[i]);
    }
}