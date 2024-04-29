#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node *left,*right; 
};


struct node* addNode(struct node *root,int n){
    if(root==NULL){//100
        //create root 
        root = malloc(sizeof(struct node));
        root->num=n;
        root->left=NULL;
        root->right=NULL;
        return root; 
    }else{
        if(n > root->num){
            //root is small 
            //right side
            struct node *l = malloc(sizeof(struct node));
            l->num = n;
            l->left=NULL;
            l->right=NULL;
            root->right = l;

        }else{
            //left side 
            struct node *l = malloc(sizeof(struct node));
            l->num = n;
            l->left=NULL;
            l->right=NULL;
            root->left = l;

        }
    }

}

int main(){

    struct node *root = NULL; 
    root = addNode(root,100); //100->root 
    addNode(root,200);// 200-> {root->right}
    addNode(root,80); // 80->root->left 

    printf("%d  %d  %d",root->num,root->left->num,root->right->num);

    return 0;
}