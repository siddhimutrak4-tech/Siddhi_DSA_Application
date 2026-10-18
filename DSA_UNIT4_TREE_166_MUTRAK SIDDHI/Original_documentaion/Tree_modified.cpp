#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Structure of a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Recursive Inorder Traversal
void recursiveInorder(Node* root, vector<int>& result) {
    if (root == NULL)
        return;

    recursiveInorder(root->left, result);
    result.push_back(root->data);
    recursiveInorder(root->right, result);
}

// Iterative Inorder Traversal
void iterativeInorder(Node* root, vector<int>& result) {
    stack<Node*> s;
    Node* current = root;

    while (current != NULL || !s.empty()) {
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        result.push_back(current->data);
        current = current->right;
    }
}

int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> recursiveResult;
    vector<int> iterativeResult;

    // Perform both traversals
    recursiveInorder(root, recursiveResult);
    iterativeInorder(root, iterativeResult);

    // Display recursive result
    cout << "Recursive Inorder Traversal: ";
    for (int i = 0; i < (int)recursiveResult.size(); i++) {
        cout << recursiveResult[i] << " ";
    }

    cout << endl;

    // Display iterative result
    cout << "Iterative Inorder Traversal: ";
    for (int i = 0; i < (int)iterativeResult.size(); i++) {
        cout << iterativeResult[i] << " ";
    }

    cout << endl;

    // Compare both results
    if (recursiveResult == iterativeResult) {
        cout << "Both traversals produce identical output." << endl;
    } else {
        cout << "The outputs are different." << endl;
    }

    return 0;
}
