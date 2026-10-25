#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node* BinaryTree(){
    int x;
    cin >> x;
    if(x == -1){
        return nullptr;
    }

    Node* temp = new Node(x);
    cout <<"Enter the left child of "<< x <<" ";
    temp->left = BinaryTree();
    cout <<"Enter the right child of "<< x <<" ";
    temp->right = BinaryTree();
    return temp;
}
void preOrder(Node* root){
    if(root==nullptr){
        return;
    }
    cout << root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==nullptr){
        return;
    }
    
    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
    
}
void postOrder(Node* root){
    if(root==nullptr){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data <<" ";
}
int main(){
    int x;
    cout << "Enter the value of root Node : ";
    Node* root = BinaryTree();

    cout <<"\nPreOrder : "<< endl;
    preOrder(root);
    cout <<"\nInOrder : "<< endl;
    inOrder(root);
    cout <<"\nPostOrder : "<< endl;
    postOrder(root);
    return 0;
}