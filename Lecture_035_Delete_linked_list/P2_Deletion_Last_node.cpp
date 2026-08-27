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

void DeleteLastNode(Node * &Head){

    if(Head == NULL){
        cout << "Invalid operation" << endl;
        return;
    }

    else if(Head->next == NULL){
        Node * temp = Head;
        Head = Head->next;
        delete temp;
    }

    else{
        Node * tail;
        tail = Head;

        Node * prev;
        prev = NULL;

        while(tail->next != NULL){
            prev = tail;
            tail = tail->next;
        }
        prev->next = NULL;
        delete tail;
    }

}

int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);

    DeleteLastNode(Head);

    printing(Head);
}