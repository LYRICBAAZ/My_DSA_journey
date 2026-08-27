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

void InsertEnd(int arr[],int n,Node* &Head,Node* &Tail){

    for(int i=0;i<n;i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
}

void printing(Node* &Head){
    Node* temp;
    temp = Head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    Node * Head;
    Node * Tail;
    Head = Tail = NULL;

    int arr[6] = {6,7,8,9,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    InsertEnd(arr,n,Head,Tail);
    printing(Head);
}