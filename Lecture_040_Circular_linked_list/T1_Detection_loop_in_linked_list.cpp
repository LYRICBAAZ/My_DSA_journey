#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node * next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void LinkedList(Node * &head,Node * &tail,int arr[],int index,int size){
    if(head == NULL){
        head = new Node(arr[index]);
        index++;
        tail = head;
    }
    
    for(int i = index;i<size;i++){
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
    
}

void circularlinkedlist(Node * head , Node * &tail){
    for(int i=0;i<3;i++){
        head = head->next;
    }

    tail->next = head;
}

bool visited(Node * curr,vector<Node*>&v){
    for(int i=0;i<v.size();i++){
        if(v[i]==curr){
            return true;
        }
    }
    return false;
}

bool DetectLoop(Node * head,vector<Node*>&v){
    Node * curr = head;
    while(curr){
        if(visited(curr,v)){
            return true;
        }
        v.push_back(curr);
        curr = curr->next;
    }
    return false;
}

void printing(Node * head){
    while(head){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node * head = NULL;
    Node * tail = head;

    vector<Node*> v;

    int arr[8] = {9,8,7,6,5,4,3,2};
    LinkedList(head,tail,arr,0,8);
    printing(head);

    // creating circular linked list
    circularlinkedlist(head,tail);
    // printing(head);   Infinite printing;

    if (DetectLoop(head,v)){
        cout << "This is a circular linked list: " << endl;
    }
    else{
        cout << "This is not a circular linked list: " << endl;
    }

}
