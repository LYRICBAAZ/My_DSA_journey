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
void BinaryTree(Node* root){
    int first;
    cout <<"Enter left part of "<< root->data <<" ";
    cin >> first;
    
    // Left part
    if(first != -1){
        root->left = new Node(first);
        BinaryTree(root->left);
    }
    
    int second;
    cout <<"Enter right part of "<< root->data<<" ";
    cin>> second;

    // right part
    if(second != -1){
        root->right = new Node(second);
        BinaryTree(root->right);
    }

}
int main(){
    int x;
    cout << "Enter the value of root Node : ";
    cin >> x;
    Node* root = nullptr;
    if(x != -1){
        root = new Node(x);
        BinaryTree(root);
    }
    return 0;
}