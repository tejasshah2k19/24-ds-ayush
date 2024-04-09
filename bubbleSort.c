#include <stdio.h>
#define SIZE 10

int a[] = {12, 2, 44, 55, 33, 222, 6, 7, 11, -1};

void bubbleSort()
{
    int i, j, tmp;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // swap
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

void display(){
    int i; 
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }

}

int main(){

    printf("\nBefore Sort\n");
    display();
    bubbleSort();
    printf("\nAfter Sort\n");
    display();
    return 0;
}