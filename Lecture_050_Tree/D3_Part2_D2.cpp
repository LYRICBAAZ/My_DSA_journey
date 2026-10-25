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
int main(){
    int x;
    cout << "Enter the value of root Node : ";
    Node* root = BinaryTree();
    return 0;
}