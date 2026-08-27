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

void createDLL(Node * &head,Node * &tail, int arr[],int index,int size){

    if(head == NULL){
        head = new Node(arr[index]);
        index++;
        tail = head;
    }
    for(int i = index;i<size;i++){
        Node * temp = new Node(arr[i]);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void Insertion(Node* &head,int position,int value){
    // Insertion at head position
    if(position == 0){
        // Head == NULL
        if(head == NULL){
            head = new Node(value);
        }
        // Head is present
        else{
            Node * temp = new Node(value);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    // Insert end or in middle
    else{
        Node * curr = head;
        while(--position){
            curr = curr->next;
        }
        
        // For End
        if(curr->next == NULL){
            Node * temp = new Node(value);
            curr->next = temp;
            temp->prev = curr;
        }

        // Insert at Middle
        else{
            Node * temp = new Node(value);
            temp->next = curr->next;
            curr->next->prev = temp;
            curr->next = temp;
            temp->prev = curr;
        }
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

    Node * tail = head;

    int arr[8] = {10,4,7,8,6,9,12,15};

    createDLL(head,tail,arr,0,8);
   
    // Printing before Insertion
    printing(head);

    Insertion(head,6,100);

    // Printing afetr Insertion
    printing(head);

    return 0;
}