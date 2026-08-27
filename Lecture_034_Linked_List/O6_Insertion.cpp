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

//LinkedList Creation
Node * createlinkedlist(int arr[],int index,int size){
    //Base Case
    if(index==size){
        return NULL;
    }
    Node * temp;
    temp = new Node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);
    return temp;
}

//Insertion
void insert(int position,int value,Node * &Head){
    Node * temp = Head;
    while((position--)!=1){
        temp = temp->next;
    }
    Node * InValue;
    InValue = new Node(value);
    InValue->next = temp->next;
    temp->next = InValue; 
}

//Printing
void printing(Node * &Head){
    Node * temp = Head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    int arr[5]={9,8,7,6,5};
    Node * Head;
    Head = NULL;

    // LinkedList creation
    Head = createlinkedlist(arr,0,5);

    int x = 3;
    int value = 10;

    insert(x,value,Head);

    printing(Head);
    
}

