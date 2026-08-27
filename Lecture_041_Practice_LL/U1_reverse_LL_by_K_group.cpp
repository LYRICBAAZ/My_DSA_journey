#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to create linked list of size 12
void createList(Node* &head, Node* &tail) {
    for (int i = 1; i <= 12; i++) {
        Node* temp = new Node(i);

        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
}

void reverse(Node * head,int k){
    
}

// Function to print list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    createList(head, tail); 
    printList(head);

    int k = 5;
    reverse(head,k);
    printList(head);

    return 0;
}