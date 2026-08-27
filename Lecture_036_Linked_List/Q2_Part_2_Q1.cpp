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

void ReverseLinkedList(Node * &Head){
    
    vector<int> v;

    Node * temp = Head;
    while(temp != NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }

    int i = v.size()-1;
    temp = Head;
    while(temp){
        temp->data = v[i];
        i--;
        temp = temp->next;
    }
}

int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);

    ReverseLinkedList(Head);
    
    printing(Head);

    return 0;

}