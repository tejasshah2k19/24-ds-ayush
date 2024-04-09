#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *addNode(Node *root, int num)
{ // NULL,100

    if (root == NULL)
    {
        root = new Node();
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        if (root->data < num) // 98 < 100
        {
            //right 
            addNode(root->right,num); // addNode(NULL,100);
        }
        else
        {
            // left
            Node *tmp = new Node();
        }
    }
}

int main()
{
    Node *head = NULL;
    head = addNode(head, 98);
    addNode(head, 100);
    addNode(head,120);

    return 0;
}
