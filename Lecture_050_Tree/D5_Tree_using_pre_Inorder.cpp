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

Node* Tree(unordered_map<int,int>& m,vector<int>& inorder,vector<int>&preorder,int Is, int Ie, int index){
    if (Is > Ie) {
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    int pos = m[preorder[index]];
    root->left = Tree(m,inorder,preorder,Is,pos-1,index+1);
    root->right = Tree(m,inorder,preorder,pos+1,Ie,index+(pos-Is)+1);
    return root;
}
Node* buildTree(vector<int>& inorder,vector<int>& preorder) {
    unordered_map<int,int> m;
    for (int i = 0; i < inorder.size(); i++) {
        m[inorder[i]] = i;
    }
    return Tree(m, inorder, preorder,0, inorder.size() - 1, 0);
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
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};

    Node* root = buildTree(inorder, preorder);

    cout << "Inorder: ";
    inorderTraversal(root);

    cout << "\nPreorder: ";
    preorderTraversal(root);

    cout << "\nPostorder: ";
    postorderTraversal(root);

    return 0;
}
