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

    Node* insert(Node* root, int value) {

        // If tree is empty
        if (root == NULL) {
            return new Node(value);
        }

        // Insert in left side
        if (value < root->data) {
            root->left = insert(root->left, value);
        }

        // Insert in right side
        else if (value > root->data) {
            root->right = insert(root->right, value);
        }

        return root;
    }

    void display(Node* root) {
        if (root == NULL)
            return;

        display(root->left);
        cout << root->data << " ";
        display(root->right);
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

    cout << "BST elements: ";
    tree.display(tree.root);

    return 0;
}