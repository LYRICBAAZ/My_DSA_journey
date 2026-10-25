#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
int main(){
    int x;
    cout <<"Enter the root element : ";
    cin >> x;
    Node* root = new Node(x);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int first,second;
        Node* temp  = q.front();
        q.pop();
        cout <<"Enter the left child of "<< temp->data <<" ";
        cin >> first;
        if(first!=-1){
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout <<"Enter the right child of "<< temp->data <<" ";
        cin >> second;
        if(second!=-1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}