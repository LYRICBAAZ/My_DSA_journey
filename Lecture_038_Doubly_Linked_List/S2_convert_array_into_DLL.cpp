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
    // Base Case
    if(index == size){
        return;
    }

    // Processing
    if(head == NULL){
        head = new Node(arr[index]);
        tail = head;
    }
    else{
        Node * temp = new Node(arr[index]);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    // recursive call
    createDLL(head,tail,arr,index+1,size);
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
   
    // Printing
    printing(head);

    return 0;
}