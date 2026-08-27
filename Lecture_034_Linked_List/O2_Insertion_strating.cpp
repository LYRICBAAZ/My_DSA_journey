#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }

};
int main(){

    Node *Head;
    Head = NULL;

    int arr[5] = {4,6,2,9,7};

    for(int i= sizeof(arr)/sizeof(arr[0])-1;i>=0;i--){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        else{
            Node * ptr;
            ptr = new Node(arr[i]);
            ptr->next = Head;
            Head = ptr;
        }
    }

    Node * temp;
    temp = Head;
    while(temp!= NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}