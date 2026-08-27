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

void DeleteAnyNode(Node * &Head,Node * &temp,Node * prev,int position){

    if(Head == NULL){
        cout << "Invalide operation" << endl;
    }
    else if(temp == Head){
        Node * temp = Head;
        Head = Head->next;
        delete temp;
    }
    else{
        prev->next = temp->next;
        delete temp;
    }
}

int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);

    int position = 6;

    Node * temp = Head;
    Node * prev = NULL;
    position--;
    while(position--){
        prev = temp;
        temp = temp->next;
    }
    if(position > sizeof(arr)/sizeof(arr[0])){
        cout << "Invalid access" << endl;
        return 0;
    }
    DeleteAnyNode(Head,temp,prev,position);

    printing(Head);

    return 0;

}