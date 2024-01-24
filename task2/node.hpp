#ifndef NODE_HPP
#define NODE_HPP
#include <stdlib.h>

typedef struct node {
    int data;
    node *left = nullptr;
    node *right = nullptr;
} node;

void insert(node **, int);
void del(node **, int);
node* delNode(node **, int);
int findMin(node **);

#endif
