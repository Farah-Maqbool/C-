#include <iostream>
using namespace std;

// Node structure for the tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// 1?? Pre-Order Traversal (Root ? Left ? Right)
void preOrder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// 2?? Post-Order Traversal (Left ? Right ? Root)
void postOrder(Node* root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// 3?? Create a Binary Search Tree (BST)
Node* insertBST(Node* root, int val) {
    if (root == nullptr) return new Node(val);
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

// 4?? Search in BST (Non-Recursive)
bool searchBSTNonRecursive(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key) return true;
        root = (key < root->data) ? root->left : root->right;
    }
    return false;
}

// 5?? Search in BST (Recursive)
bool searchBSTRecursive(Node* root, int key) {
    if (root == nullptr) return false;
    if (root->data == key) return true;
    return (key < root->data) ? searchBSTRecursive(root->left, key) : searchBSTRecursive(root->right, key);
}

int main() {
    // Creating a sample tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    // Tree Traversal
    cout << "Pre-Order Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postOrder(root);
    cout << endl;

    // Creating BST
    Node* bstRoot = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int val : values) {
        bstRoot = insertBST(bstRoot, val);
    }

    // Searching in BST
    int key = 40;
    cout << "Search " << key << " Non-Recursive: " << (searchBSTNonRecursive(bstRoot, key) ? "Found" : "Not Found") << endl;
    cout << "Search " << key << " Recursive: " << (searchBSTRecursive(bstRoot, key) ? "Found" : "Not Found") << endl;

    return 0;
}
