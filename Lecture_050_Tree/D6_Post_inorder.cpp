#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* Tree(unordered_map<int,int>& m, vector<int>& inorder,vector<int>&postorder, int Is, int Ie, int& index) {

    if (Is>Ie) {
        return NULL;
    }
    Node* root = new Node(postorder[index]);
    int pos = m[postorder[index]];
    index--;

    root->right = Tree(m, inorder, postorder, pos + 1, Ie, index);
    root->left = Tree(m, inorder, postorder, Is, pos - 1, index);
    return root;
}

Node* buildTree(vector<int>& inorder, vector<int>& postorder) {

    unordered_map<int,int> m;
    for (int i = 0; i < inorder.size(); i++) {
        m[inorder[i]] = i;
    }
    int index = postorder.size() - 1;
    return Tree(m, inorder, postorder, 0, inorder.size() - 1, index);
}

// Inorder Traversal
void inorderTraversal(Node* root) {
    if (root == NULL) return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Preorder Traversal
void preorderTraversal(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Postorder Traversal
void postorderTraversal(Node* root) {
    if (root == NULL) return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {

    vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
    vector<int> postorder = {4, 5, 2, 6, 7, 3, 1};

    Node* root = buildTree(inorder, postorder);

    cout << "Inorder: ";
    inorderTraversal(root);

    cout << "\nPreorder: ";
    preorderTraversal(root);

    cout << "\nPostorder: ";
    postorderTraversal(root);

    return 0;
}
