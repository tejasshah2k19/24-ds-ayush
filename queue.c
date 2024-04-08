#include <stdio.h>
#define SIZE 5
int q[SIZE];

int rear = -1;  // insert
int front = -1; // remove
void insert(int num)
{

    if (rear == SIZE - 1)
    {
        printf("\nQueue is OverFlow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        q[rear] = num;
    }
}

void display()
{
    int i;

    printf("\nElements in the Queue\n");
    for (i = front; i <= rear; i++)
    {
        printf(" %d", q[i]);
    }
}

void dequeue()
{
    printf("\n %d", q[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

int main()
{

    insert(10);
    insert(20);
    display();
    insert(100);
    insert(500);
    display();
    insert(70);
    insert(700);
    display();
    return 0;
}
