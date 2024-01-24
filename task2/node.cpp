#include "node.hpp"

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree)) {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = nullptr;temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data) {
        insert(&(*tree)->left, val);
    } else if(val > (*tree)->data) {
        insert(&(*tree)->right, val);
    }
}

void del(node ** tree, int val)
{
    if ((*tree) == nullptr){
        return;
    }

    *tree = delNode(tree, val);
}

node* delNode(node ** tree, int val)
{
    if (tree == nullptr){
        return nullptr;
    }

    if ((*tree)->data == val){
        if (!((*tree)->left) && !((*tree)->right)){
            free(*tree);
            *tree = nullptr;
        } else if (!((*tree)->right)){
            node* temp = (*tree)->left;
            free(*tree);
            *tree = temp;
        } else if (!((*tree)->left)){
            node* temp = (*tree)->right;
            free(*tree);
            *tree = temp;
        } else {
            int m = findMin(&(*tree)->right);
            del(&((*tree)->right), m);
            (*tree)->data = m;
        }
    } else if ((*tree)->data > val){
        (*tree)->left = delNode(&(*tree)->left, val);
    } else {
        (*tree)->right = delNode(&(*tree)->right, val);
    }
    return *tree;
}

int findMin(node ** tree)
{
    if (!((*tree)->left)){
        return (*tree)->data;
    } else {
        return findMin(&((*tree)->left));
    }
}