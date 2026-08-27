#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Print function
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Delete at position (0-based index)
void deleteNode(Node* &head, Node* &tail, int pos){

    // 🔴 Case 0: Empty list
    if(head == NULL){
        cout << "List empty\n";
        return;
    }

    // 🔴 Case 1: Delete head
    if(pos == 0){
        Node* temp = head;

        // Only one node
        if(head->next == NULL){
            head = tail = NULL;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
        return;
    }

    // 🔹 Traverse to position
    Node* curr = head;
    int count = 0;

    while(curr != NULL && count < pos){
        curr = curr->next;
        count++;
    }

    // 🔴 Invalid position
    if(curr == NULL){
        cout << "Invalid position\n";
        return;
    }

    // 🔴 Case 2: Delete last node
    if(curr->next == NULL){
        tail = curr->prev;
        tail->next = NULL;
        delete curr;
        return;
    }

    // 🔴 Case 3: Middle deletion
    Node* prevNode = curr->prev;
    Node* nextNode = curr->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    delete curr;
}

// Insert at end (helper)
void insertEnd(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);

    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // Create list: 10 20 30 40 50
    insertEnd(head, tail, 10);
    insertEnd(head, tail, 20);
    insertEnd(head, tail, 30);
    insertEnd(head, tail, 40);
    insertEnd(head, tail, 50);

    print(head);

    deleteNode(head, tail, 0);   // delete head
    print(head);

    deleteNode(head, tail, 2);   // delete middle
    print(head);

    deleteNode(head, tail, 2);   // delete last
    print(head);
}