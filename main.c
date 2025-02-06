#include "bst.h"
#include <stdio.h>

int main() {
  int option;
  tree tree = NULL;

  do {
    scanf("%d", &option);

    switch (option) {
    case 1: {
      int value;
      scanf("%d", &value);
      tree = insertNode(tree, value);
      break;
    }
    case 2: {
      printPreOrder(tree);
      printf("\n");
      break;
    }
    case 3: {
      printInOrder(tree);
      printf("\n");
      break;
    }
    case 4: {
      printPosOrder(tree);
      printf("\n");
      break;
    }
    case 5: {
      printReverse(tree);
      printf("\n");
      break;
    }
    case 6: {
      int height = getHeight(tree);
      if (height > 0) {
        printf("%d\n", height);
      } else {
        printf("\n");
      }
      break;
    }
    case 7: {
      printf("%d\n", getNumberOfLeaves(tree));
      break;
    }
    case 8: {
      int value;
      scanf("%d", &value);
      printPath(tree, value);
      printf("\n");
      break;
    }
    case 9: {
      int value;
      scanf("%d", &value);
      tree = removeNode(tree, value);
      break;
    }
    }
  } while (option != 99);

  return 0;
}
