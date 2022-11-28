// Binary tree implementation

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node)");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter the left child of %d",x);
    newnode->left=create();
    printf("Enter the right child of %d",x);
    newnode->right=create();
    return newnode;
}
void traverseInorder(struct node *root){
    if(root==NULL)
    return;
    traverseInorder(root->left);
    printf("%d",root->data);
    traverseInorder(root->right);
}
int main(){
    struct node *root;
    root=0;
    root=create();
    printf("The inorder traversal of given binary tree is-\n");
    traverseInorder(root);
    return 0;

}