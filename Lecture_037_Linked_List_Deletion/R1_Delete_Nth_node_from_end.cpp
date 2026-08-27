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

void DeleteNode(Node * &Head,Node * curr, Node * prev,int position){
    
    int count = 0;
    Node * temp = curr;
    while(curr != NULL){
        count++;
        curr = curr->next;
    }

    // invalid case
    if(position > count) {
        cout << "Invalid access " << endl;
        return;
    }

    curr = temp;
    count = count - position;
    while(count--){
        prev = curr;
        curr = curr->next;
    }

    // delete head case
    if(prev == NULL){
        Head = Head->next;
        delete curr;
        return;
    }
    // Rest case
    prev->next = curr->next;
    delete curr;
}

int main(){
    Node * Head;
    Head = NULL;

    int arr[5] = {9,8,7,6,5};

    Head = CreatLinkedList(arr,0,5);

    printing(Head);

    int n = 2;      // End se second node delete kro...
    DeleteNode(Head,Head,NULL,n);
    
    printing(Head);

    return 0;

}