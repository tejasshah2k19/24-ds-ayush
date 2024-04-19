#include<stdio.h>
#define SIZE 10 


int partition(int arr[],int low,int high){
    int pivot = arr[high]; 
    int i=low,j,tmp;

    for(j=low;j<high;j++){
        if(arr[j] < pivot){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp; 
            i++;        
        }
    }
    tmp = arr[i];
    arr[i] = arr[high];
    arr[high] = tmp; 
    return i; 
}

void quickSort(int arr[],int low,int high){
    int mid; 
    if(low<high){ //low < high -> false -> single element 
        mid = partition(arr,low,high);//set the pivot get the index 
        quickSort(arr,low,mid-1);//left 
        quickSort(arr,mid+1,high); //right 
    }
}


void display(int arr[]){
    int i;
    printf("\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    //int arr[]={15,42,35,64,17,8,95,44,13,40};
    int arr[]={100,90,80,70,60,50,40,30,20,10};
    display(arr);
    quickSort(arr,0,SIZE-1);
    display(arr);
    return 0; 
}