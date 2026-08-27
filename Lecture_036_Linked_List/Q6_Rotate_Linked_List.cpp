#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

// Linked List Creation
Node * CreatLinkedList(int arr[],int index,int size){
    // Base case
    if(index == size){
        return NULL;
    }

    Node * temp;
    temp = new Node(arr[index]);
    temp->next = CreatLinkedList(arr,index+1,size);
    return temp;
}

// Printing
void printing(Node * &Head){
    Node * temp = Head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

Node * RotateLinkedList(Node * &Head,int k){
    Node *prev = NULL;
    Node * curr = Head;

    while(k--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;

    Node * temp = curr;

    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = Head;
    Head = temp;
}

int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);
    
    int k = 2;
    
    RotateLinkedList(Head,k);

    printing(Head);

    return 0;

}