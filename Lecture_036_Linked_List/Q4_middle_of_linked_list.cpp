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

Node * MiddleLinkedList(Node * Head){
    Node * temp = Head;

    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    count = count/2;
    temp = Head;
    while(count--){
        temp = temp->next;
    }
    return temp;
}

int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);

    Node * Middle = MiddleLinkedList(Head);
    
    cout << "Middle element is: " << Middle->data << endl;

    return 0;

}