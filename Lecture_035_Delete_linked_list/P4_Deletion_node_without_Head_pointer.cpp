#include<iostream>
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

void DeleteNode(Node * curr){
    if(curr == NULL || curr->next == NULL){
        cout << "Can't delete last node with this method" << endl;
        return;
    }
    Node * temp = curr->next;
    curr->data = temp->data;
    curr->next = temp->next;
    delete temp;
}



int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);

    // Creating pointer pointing 7
    Node * curr = Head;
    for(int i=0;i<2;i++){
        curr = curr->next;
    }

    DeleteNode(curr);

    printing(Head);

    return 0;

}