#include <stdio.h>
#define SIZE 10

int a[] = {12, 2, 44, 55, 33, 222, 6, 7, 11, -1};

void selectionSort()
{
    int i, j, tmp,min;

    for(i=0; i<SIZE;i++){
        min=i;
        for(j=i+1;j<SIZE;j++){
            if(a[min] > a[j]){
                min=j; 
            }
        }
        tmp = a[min];
        a[min] = a[i];
        a[i]  = tmp; 

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
    selectionSort();
    printf("\nAfter Sort\n");
    display();
    return 0;
}