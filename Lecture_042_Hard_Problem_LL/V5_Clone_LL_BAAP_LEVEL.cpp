#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *random;
    Node(int data){
        this->data = data;
        next = NULL;
        random = NULL;
    }
};

Node* clone(Node* head){
    Node* head1 = head;
    Node* temp = new Node(0);
    Node* tail = temp;

    while(head1){
        tail->next = new Node(head1->data);
        tail = tail->next;
        head1 = head1->next;
    }
    tail = temp;
    temp = temp->next;
    delete tail;
    tail = temp;
    head1 = head;

    Node* curr1 = head;
    Node* curr2 = temp;
    Node* front1 = NULL;
    Node* front2 = NULL;
    
    while(curr1){

        front1 = curr1->next;
        front2 = curr2->next;

        curr1->next = curr2;
        curr2->next = front1;

        curr1 = front1;
        curr2 = front2;

    }
    
    curr1 = head;

    while(curr1){
        curr2 = curr1->next;
        if(curr1->random)
        curr2->random = curr1->random->next;
        curr1 = curr2->next;
    }

    curr1 = head;
    
    while(curr1->next){
        front1 = curr1->next;
        curr1->next = front1->next;
        curr1 = front1;
    }

    return temp;
}

void printList(Node* head){
    while(head){
        cout << "Data: " << head->data <<" Random:  "<<head->random->data << endl;
        head = head->next;
    }
}

int main(){
    // Nodes creation
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);

    // Connections
    one->next = two;
    one->random = three;
    two->next = three;
    two->random = one;
    three->next = four;
    three->random = five;
    four->next = five;
    four->random = three;
    five->next = NULL;
    five->random = two;

    cout <<"Printing Original List: "<< endl; 
    printList(one);

    cout << endl;

    cout <<"Printing clone list: "<< endl;
    Node* cloneHead = clone(one);
    printList(cloneHead);


    return 0;
}