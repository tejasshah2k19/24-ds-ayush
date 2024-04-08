#include<stdio.h>
#include<string.h>
#define SIZE 50 

char stack[SIZE]; 
int top=-1; 

void push(char x){
    top++;
    stack[top] = x; 
}

char pop(){
    
    char x = stack[top];
    top--; 
    return x;  
}


int main()
{
    char str[50],x;
    int i;
    int valid = 1 ;
    printf("\nEnter String: ");
    scanf("%s",&str) ; // (())  [{}]

    for(i=0;i<strlen(str);i++){
        if(str[i] =='(' || str[i] =='{' || str[i] == '['){
            push(str[i]); 
        }else{
            
            x = pop(); 

            if(str[i] == ')' && x == '(' ){
                continue;
            }else if(str[i] == ']' && x == '['){
                continue;
            }else if(str[i] == '}' && x =='{'){
                continue;
            }else{
                valid = 0;
                 break; 
            }
        }
    }

    if(valid == 0){
        printf("\nInValid");
    }else{
        printf("\nValid");
    }


    return 0; 
}