#include<stdio.h>
#define S1 5
#define S2 5
#define S3 S1+S2 

int a[] ={5,10,15,200,300};
int b[] ={7,20,30,40,50};
int c[S3];


void display(){
    int i;
    for(i=0;i<S3;i++){
        printf(" %d",c[i]);
    }
}

void mergeSort(){

    int i,j,k;
    i=0;j=0;k=0;

    while(i<S1 && j<S2){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        }else{
            c[k++] = b[j++];
        }
    }

    while(i<S1){
        c[k++] = a[i++];
    }

    while(j<S2){
        c[k++] = b[j++];
    }

}



int main(){

    mergeSort();
    display();
    return 0;
}