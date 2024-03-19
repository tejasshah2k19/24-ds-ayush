#include<stdio.h>
#define SIZE 5 

    int a[SIZE];
    int i;


void getData(){
     for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]); 
    }

}

void printData(){
        printf("\nArray Element\n");
    for(i=0;i<SIZE;i++){
        printf("\n%d",a[i]); 
    }

}

void linearSearch(int key){
    //search 
}

void shift(int count){
    //10 20 30 40 50
    //20 30 40 50 10

}

int main(){

   

    getData();
    printData();
    linearSearch(10); 
    shift(1); 
    printData();//20 30 40 50 10 
    return 0;
}