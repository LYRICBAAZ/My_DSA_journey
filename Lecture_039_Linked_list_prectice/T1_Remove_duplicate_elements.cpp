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

void createLinkedList(Node * &head,int arr[],int index,int size){
    if(head == NULL){
        head = new Node(arr[index]);
        index++;
    } 
    Node * prev = head;
    for(int i = index; i<size; i++){
        Node * temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
}

void printing(Node * head){
    while(head){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
}

void removeDuplicates(Node * head){
    vector<int> v;
    Node * curr = head;
    v.push_back(head->data);
    head = head->next;
    while(head){
        if(head->data != v[v.size()-1]){
            v.push_back(head->data);
        }
        head = head->next;
    }

    
    for(int i=0;i<v.size();i++){
        curr->data = v[i];
        if((i+1)<v.size()){
            curr = curr->next;
        }
    }
    curr->next = NULL;
}

int main(){
    Node * head = NULL;
    int arr[8]={2,2,2,3,3,4,5,5};

    createLinkedList(head,arr,0,8);
    printing(head);

    removeDuplicates(head);
    printing(head);
}