# Recursive and Iterative Inorder Traversal Comparison

## 1. Problem Statement

To develop a C++ program to implement recursive and iterative inorder traversal of the same binary tree and verify that both produce identical output.

## 2. Objectives

- To implement recursive inorder traversal of a binary tree.
- To implement iterative inorder traversal using a stack.
- To compare the outputs of both traversals.
- To verify that both methods produce identical results.

## 3. Algorithm

1. Start.
2. Create a binary tree with nodes containing data.
3. Initialize two empty vectors: `recursiveResult` and `iterativeResult`.
4. Perform recursive inorder traversal (Left → Root → Right) and store the output in `recursiveResult`.
5. Perform iterative inorder traversal using a stack and store the output in `iterativeResult`.
6. Display both traversal results.
7. Compare both results. If they are identical, display "Both traversals produce identical output." Otherwise, display "The outputs are different."
8. Stop.

## 4. Flowchart

Add your flowchart image here.

![Flowchart](flowchart.png)

## 5. Conclusion

The C++ program implements recursive and iterative inorder traversal of the same binary tree. Both methods follow the Left → Root → Right order and produce identical outputs. The comparison verifies that both traversal techniques work correctly.
