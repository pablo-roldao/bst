# Binary Search Tree

A **Binary Search Tree (BST)** is a special type of binary tree that follows these properties:

1. **Left Subtree Property**: The left child of a node contains only values smaller than the node's value.
2. **Right Subtree Property**: The right child of a node contains only values greater than the node's value.
3. **No Duplicates**: Typically, a BST does not allow duplicate values.

## How to Compile and Run

1. In the project directory, compile the code with:
   ```sh
   gcc -o main *.c
   ```
2. Then, run:
   ```sh
   ./main
   ```

## How to Run Tests

1. With the project already compiled, run:
   ```sh
   ./main < in.test > out.test
   ```
2. To compare the expected output with the generated output, use:
   ```sh
   diff expected.test out.test
   ```
   - If no output is displayed, all tests have passed.

