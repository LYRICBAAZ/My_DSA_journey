#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * prev;
    Node * next;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void InsertAtHead(Node * &head,int v){
    // Edge Case
    if(head == NULL){
        head = new Node(v);
    }
    // Rest cases
    else{
        Node * temp = new Node(v);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

void InsertAtEnd(Node * &head,int n){
    // Edge Case
    if(head == NULL){
        head = new Node(n);
    }
    // Rest cases
    else{
        Node * temp = new Node(n);

        Node * tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

}

void printing(Node * head){
    while(head){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node * head;
    head = NULL;

    // Insert in starting
    InsertAtHead(head,5);
    InsertAtHead(head,7);

    // Insert in End
    InsertAtEnd(head,9);
    
    // Printing
    printing(head);

    return 0;
}