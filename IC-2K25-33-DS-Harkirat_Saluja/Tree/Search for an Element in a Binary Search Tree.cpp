#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = NULL;
    }

    // Insert Node
    Node* insert(Node* root, int value) {
        if (root == NULL)
            return new Node(value);

        if (value < root->data)
            root->left = insert(root->left, value);

        else if (value > root->data)
            root->right = insert(root->right, value);

        return root;
    }

    // Search Node
    bool search(Node* root, int key) {

        if (root == NULL)
            return false;

        if (root->data == key)
            return true;

        if (key < root->data)
            return search(root->left, key);
        else
            return search(root->right, key);
    }
};

int main() {
    BST tree;

    tree.root = tree.insert(tree.root, 45);
    tree.root = tree.insert(tree.root, 25);
    tree.root = tree.insert(tree.root, 65);
    tree.root = tree.insert(tree.root, 15);
    tree.root = tree.insert(tree.root, 35);
    tree.root = tree.insert(tree.root, 55);
    tree.root = tree.insert(tree.root, 75);

    int key = 55;

    if (tree.search(tree.root, key))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}