#include<stdio.h>
#define S 10



int main(){
    int graph[S][S];
    int v,e,i,src,dest;

    printf("how many vertex you have?");
    scanf("%d",&v); //4 4*4 

    printf("how many edges you have?");
    scanf("%d",&e); 


    for(i=1;i<=e;i++){
        printf("\nEnter Source and Destination");
        scanf("%d%d",&src,&dest); //0 1 
        graph[src][dest] = 1;
        graph[dest][src]=1; 
    }
    return 0;
}