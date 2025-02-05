#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

tree insertNode(tree root, int value) {
  if (root == NULL) {
    tree newNode = (tree)malloc(sizeof(node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
  }

  if (value <= root->value) {
    root->left = insertNode(root->left, value);
  } else {
    root->right = insertNode(root->right, value);
  }

  return root;
}

void printNode(int value) {
    printf("[%d]", value);
}

void printPreOrder(tree root) {
  if (root != NULL) {
    printNode(root->value);
    printPreOrder(root->left);
    printPreOrder(root->right);
  }
}

void printInOrder(tree root) {
    if (root != NULL) {
        printInOrder(root->left);
        printNode(root->value);
        printInOrder(root->right);
    }
}

void printPosOrder(tree root) {
    if (root != NULL) {
        printPosOrder(root->left);
        printPosOrder(root->right);
        printNode(root->value);
    }
}

void printReverse(tree root) {
    if (root != NULL) {
        printReverse(root->right);
        printNode(root->value);
        printReverse(root->left);
    }
}

int getHeight(tree root) {
    if (root == NULL)
        return 0;
    
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

void printPath(tree root, int value) {}

int getNumberOfLeaves(tree root) { return 0; }

tree erase(tree root, int value) {}