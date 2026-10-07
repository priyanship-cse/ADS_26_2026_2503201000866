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

Node* create() {
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node* root = new Node(x);

    cout << "Enter left of " << x << ": ";
    root->left = create();

    cout << "Enter right of " << x << ": ";
    root->right = create();

    return root;
}

void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int totalnode(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + totalnode(root->left) + totalnode(root->right);
}

int leafnode(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return leafnode(root->left) + leafnode(root->right);
}

int internalnode(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return 1 + internalnode(root->left) + internalnode(root->right);
}

int main() {
    cout << "Enter the root : ";
    Node* root = create();

    cout << "Preorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nTotal Nodes: " << totalnode(root);

    cout << "\nLeaf Nodes: " << leafnode(root);

    cout << "\nInternal Nodes: " << internalnode(root);

    return 0;
}
