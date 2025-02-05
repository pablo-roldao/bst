#ifndef BST_H
#define BST_H

typedef struct node {
  int value;
  struct node *left;
  struct node *right;
} node;

typedef node *tree;

tree insertNode(tree root, int value);
void printPreOrder(tree root);
void printInOrder(tree root);
void printPosOrder(tree root);
void printReverse(tree root);
void printPath(tree root, int value);
int getNumberOfLeaves(tree root);
tree erase(tree root, int value);

#endif