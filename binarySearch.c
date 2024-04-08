#include <stdio.h>
#define SIZE 10

int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

void binarySearch(int search)
{
    int min, max, mid, found = 0;

    min = 0;
    max = SIZE - 1; // 9

    while(min<=max){

    
        mid = (min + max) / 2;

        if (a[mid] == search)
        {
            found = 1;
            break; 
        }
        else if (search > a[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    if(found == 1){
        printf("\n %d Found",search);
    }else{
        printf("\n %d Not Found",search);
        
    }
}

int main()
{

    binarySearch(90);  // found
    binarySearch(110); // not found

    return 0;
}
