#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    // Parameterised constructure
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node * createLinkedlist(int arr[],int index,int size){
    // Base Case
    if(index == size){
        return NULL;
    }

    Node * temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedlist(arr,index+1,size);

    return temp;
}
void printing(Node * &Head){
    Node * temp = Head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {7,6,5,9,8};
     
    Head = createLinkedlist(arr,0,5);

    printing(Head);
}