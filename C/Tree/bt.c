#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node* left;
    struct node* right;
}* root = NULL;

struct node* create(int l, int m, int r){

    struct node* new = (struct node* ) malloc(sizeof(struct node));
    new->data = m;


    new ->left = (struct node* ) malloc(sizeof(struct node));
    new->left->data = l;
    new->left->left = NULL;
    new->left->right = NULL;


    new ->right = (struct node* ) malloc(sizeof(struct node));  
    new->right->data = r;
    new->right->left = NULL;
    new->right->right = NULL;

    return new;  
}

struct node* child(int x){

    struct node* new = (struct node* ) malloc(sizeof(struct node));
    new->data = x;
    new->left = new->right = NULL;

    return new;
}


// -----------------------------------------------------------------------
// void preorder(struct node* node){
//     if (root != NULL) {
//         printf("%d ", node->data);
//         preorder(node->left);
//         preorder(node->right);
//     }
// }

// void inorder(struct node* node){
//     if (root != NULL) {
//         inorder(node->left);
//         printf("%d ", node->data);
//         inorder(node->right);
//     }
// }

// void postorder(struct node* node){
//     if (root != NULL) {
//         postorder(node->left);
//         postorder(node->right);
//         printf("%d ", node->data);
//     }
// }
// -----------------------------------------------------------------------


int main(){

    root = create(78, 90, 1);
    root->left->left = child(90);
    root->left->right = child(44);
    root->right->left = child(70);
    root->right->right = child(51);    

    printf("%d\n", root->data);
    printf("%d\n", root->left->data);
    printf("%d\n", root->right->data);
    printf("%d\n", root->left->left->data);
    printf("%d\n", root->left->right->data);
    printf("%d\n", root->right->left->data);
    printf("%d\n", root->right->right->data);

}