#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Pre-Order Traversal function
void preOrder(Node* root) {
    if (root == nullptr) return;

    // 1. Visit the root
    cout << root->data << " ";

    // 2. Traverse left subtree
    preOrder(root->left);

    // 3. Traverse right subtree
    preOrder(root->right);
}

int main() {
    // Creating the tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-Order Traversal: ";
    preOrder(root);
    
    return 0;
}
