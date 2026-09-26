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

    unordered_map<Node*,Node*>map;

    while(head1){
        tail->next = new Node(head1->data);
        tail = tail->next;
        map[head1]=tail;
        head1 = head1->next;
    }
    tail = temp;
    temp = temp->next;
    delete tail;
    tail = temp;
    head1 = head;

    while(head1){
        tail->random = map[head1->random];
        tail = tail->next;
        head1=head1->next;
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