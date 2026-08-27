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

void merge(Node * head1,Node * head2,Node * &head,Node *tail){
    while(head1 && head2){
        if(head1->data < head2->data){
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
            tail->next = NULL;
        }
        else{
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
            tail->next = NULL;
        }
    }
    if(head1){
        tail->next = head1;
    }
    else if(head2){
        tail->next = head2;
    }

    tail = head;
    head = head->next;
    tail->next = NULL;
    delete tail;
}

int main(){
    Node * head1 = NULL;
    int arr1[5]={2,3,4,5,6};

    createLinkedList(head1,arr1,0,5);
    printing(head1);

    
    Node * head2 = NULL;
    int arr2[9]={4,6,7,7,8,9,10,11,12};

    createLinkedList(head2,arr2,0,9);
    printing(head2);

    Node * head = new Node(0);
    Node * tail = head;
    merge(head1,head2,head,tail);
    printing(head);
}