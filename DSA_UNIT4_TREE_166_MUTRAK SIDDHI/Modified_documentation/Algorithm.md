Algorithm: Recursive and Iterative Inorder Comparison

1\. Start.

2\. Create a binary tree with nodes.

3\. Initialize two empty vectors, `recResult` and `iterResult`, and set `maxStackSize = 0`.

4\. Perform Recursive Inorder Traversal:

* If the current node is `NULL`, return.

* Traverse the left subtree recursively.

* Visit and store the current node.

* Traverse the right subtree recursively.

5\. Perform Iterative Inorder Traversal:

* Initialize an empty stack and set `current = root`.

* While `current` is not `NULL` or the stack is not empty:

    * Push nodes onto the stack while moving left.

    * Update `maxStackSize` whenever the stack grows.

    * Pop a node and store its data.

    * Move to the right child.

6\. Compare `recResult` and `iterResult`.

* If both are equal, print PASS.

* Otherwise, print FAIL.

7\. Display both traversal outputs and the maximum stack size.

8\. Repeat the test for empty, single-node, balanced, left-skewed, and right-skewed binary trees.

9\. Stop.
