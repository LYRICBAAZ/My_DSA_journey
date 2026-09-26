/*
5 -> 10 -> 19 -> 28
|    |     |     |
7    20    22    35
|          |     |
8          50    40
|                |
30               45
                 |
                 50
*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* down;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->down = NULL;
    }
};

Node* merge(Node* &head1,Node* &head2){
    // head declaration
    Node* head = NULL;
    Node* tail = NULL;

    while(head1 && head2){
        if(head1->data <= head2->data){
            if(head==NULL){
                head = head1;
                tail = head;
                head1 = head1->down;
                tail->down = NULL;
            }
            else{
                tail->down = head1;
                tail = tail->down;
                head1 = head1->down;
                tail->down = NULL;
            }
        }
        else{
            if(head==NULL){
                head = head2;
                tail = head;
                head2 = head2->down;
                tail->down = NULL;
            }
            else{
                tail->down = head2;
                tail = tail->down;
                head2 = head2->down;
                tail->down = NULL;
            }
        }
    }
    if(head1 == NULL){
        tail->down = head2;
    }
    else{
        tail->down = head1;
    }
    return head;
}

void printing(Node* root){
    while(root){
        cout << root->data <<" ";
        root = root->down;
    }
    cout << endl;
} 

int main(){
    // Flattening Linked list...
    Node* root = new Node(5);
    Node* tail = root;
    tail->down = new Node(7);
    tail->down->down = new Node(8);
    tail->down->down->down = new Node(30);
    tail = root;
    tail->next = new Node(10);
    tail=tail->next;
    tail->down = new Node(20);
    tail->down->down = new Node(40);
    tail = root->next;
    tail->next = new Node(19);
    tail = tail->next;
    tail->down = new Node(22);
    tail->down->down = new Node(50);
    tail = root->next->next;
    tail->next = new Node(28);
    tail = tail->next;
    tail->down = new Node(35);
    tail->down->down = new Node(40);
    tail->down->down->down = new Node(45);
    tail = root->next->next->next;
    tail->next = new Node(30);
    tail = tail->next;
    tail->down = new Node(34);
    tail->down->down = new Node(40);


    Node* head1 = root;
    Node* head2 = root->next;
    Node* head3 = root->next->next;

    while(head2){
        head1->next = NULL;
        head2->next = NULL;
        head1 = merge(head1,head2);
        head2 = head3;
        head1->next = head2;
        if(head3)
        head3 = head3->next;
    }
    root = head1;
    printing(root);


    return 0;

}