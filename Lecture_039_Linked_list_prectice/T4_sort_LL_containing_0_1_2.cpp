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

void sort(Node *head){
    Node * curr = head;
    int count0,count1,count2;
    count0 = count1 = count2 = 0;
    while(curr){
        if(curr->data == 0){
            count0++;
            curr = curr->next;
        }
        else if(curr->data == 1){
            count1++;
            curr = curr->next;
        }
        else{
            count2++;
            curr = curr->next;
        }
    }
    curr = head;
    while(count0--){
        curr->data = 0;
        curr = curr->next;
    }
    while(count1--){
        curr->data = 1;
        curr = curr->next;
    }
    while(count2--){
        curr->data = 2;
        curr = curr->next;
    }
}

int main(){
    Node * head = NULL;
    int arr[9]={0,1,0,2,0,1,2,0,0};

    createLinkedList(head,arr,0,9);
    printing(head);

    sort(head);
    printing(head);
    
}