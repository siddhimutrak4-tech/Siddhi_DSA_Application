# Recursive and Iterative Inorder Comparison

## 1. Problem Statement

To write a C++ program to implement recursive and iterative inorder traversal of a binary tree and verify that both methods produce identical output. The program automatically compares the traversal results and prints PASS or FAIL. It also measures the maximum stack size used by the iterative method and tests different binary tree structures.

## 2. Objectives

1. To implement recursive inorder traversal using function calls.
2. To implement iterative inorder traversal using a stack.
3. To compare both traversal outputs automatically.
4. To display PASS or FAIL based on the comparison.
5. To measure the maximum stack size used during iterative traversal.
6. To test empty, single-node, balanced, left-skewed, and right-skewed binary trees.

## 3. Algorithm

1. Start.
2. Create a binary tree for the selected test case.
3. Initialize two empty vectors, `recResult` and `iterResult`.
4. Set `maxStackSize = 0`.
5. Perform recursive inorder traversal:
   - Traverse the left subtree.
   - Visit the current node.
   - Traverse the right subtree.
6. Perform iterative inorder traversal using a stack:
   - Push nodes while moving to the left.
   - Pop a node and store its data.
   - Move to the right subtree.
   - Update the maximum stack size.
7. Compare the recursive and iterative traversal results.
8. Print PASS if both results are identical; otherwise, print FAIL.
9. Display both traversal outputs and the maximum stack size.
10. Repeat for all test cases.
11. Stop.

## 4. Flowchart

```text
          START
            |
            v
    Create Binary Tree
            |
            v
    Initialize Variables
            |
            v
   Recursive Inorder
        Traversal
            |
            v
   Iterative Inorder
   Traversal Using Stack
            |
            v
   Measure Maximum Stack
           Size
            |
            v
   Compare Both Results
            |
            v
     Are Results Equal?
         /       \
       Yes        No
        |          |
        v          v
   Print PASS  Print FAIL
        |          |
        +----+-----+
             |
             v
    Display Traversal
       Outputs and
      Maximum Stack Size
             |
             v
    All Test Cases Done?
        /          \
       No           Yes
       |             |
       v             v
  Next Test Case     STOP
```
## 8. Conclusion

The program successfully implements recursive and iterative inorder traversal of a binary tree. It verifies that both methods produce identical outputs and displays PASS or FAIL automatically. It also measures the maximum stack size used during iterative traversal. The program is tested on empty, single-node, balanced, left-skewed, and right-skewed binary trees. Both methods have a time complexity of O(n) and an auxiliary space complexity of O(h), where n is the number of nodes and h is the height of the tree.
