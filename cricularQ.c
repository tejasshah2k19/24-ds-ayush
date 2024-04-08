#include <stdio.h>
#define SIZE 5

int q[SIZE];

int front = -1;
int rear = -1;

void enQueue(int num)
{

    if (rear == SIZE - 1 && front == 0)
    {
        printf("\nQueue is Full");
    }
    else if (rear == front - 1)
    {
        printf("\nQueue is Full");
    }else if(rear == SIZE - 1 ){
        rear = 0;
        q[rear]=num;
    }else{
        rear++;
        q[rear]= num;
        if(front == -1)
            front = 0;
    }


}

void display(){
    int i;
    printf("\nElements in Queue\n");
    if(front <= rear){
        for(i=front;i<=rear;i++){
            printf(" %d",q[i]);
        }
    }else{
        //circular 
        for(i=front;i<SIZE;i++){
            printf(" %d",q[i]);
        }
        for(i=0;i<=rear;i++){
            printf(" %d",q[i]);
        }
    }
}


    int main()
    {

        enQueue(10);

        return 0;
    }