#include <stdio.h>
#define SIZE 10

int a[] = {12, 2, 44, 55, 33, 222, 6, 7, 11, -1};

void insertionSort()
{
    int i,j,tmp; 

    for(i=1;i<SIZE;i++){
        tmp=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j] > tmp){
                a[j+1]= a[j];
            }else{
                break;
            }
        }
        a[j+1] =tmp; 
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
    insertionSort();
    printf("\nAfter Sort\n");
    display();
    return 0;
}