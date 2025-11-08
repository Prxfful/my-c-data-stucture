#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int v) {
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data = v;
    newnode->left = NULL;
    newnode->right = NULL;
}
void inorder(struct node* root) {
    if( root == NULL)
    return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node* root){
    if(root==NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    struct node* root=createnode(10);
    root->left=createnode(20);
    root->right=createnode(30);
    printf("Inorder: ");
    inorder(root);
    printf("\n");
    printf("Preorder: ");
    preorder(root);
    printf("\n");
    printf("postorder: ");
    postorder(root);
    return 0;
}
