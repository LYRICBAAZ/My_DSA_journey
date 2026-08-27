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
Node * createlinkedlist(int arr[],int index,int size,Node * prev){
    // Base case
    if(index == size){
        return prev;
    }
    Node * temp;
    temp = new Node(arr[index]);
    temp->next  = prev;
    prev = temp;
    return createlinkedlist(arr,index+1,size,prev);
}

void printing(Node * &Head){
    Node * temp = Head;
    while(temp != 0){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
int main(){
Node * Head;
Head = NULL;
int arr[5]={8,7,6,5,4};
Head = createlinkedlist(arr,0,5,NULL);

printing(Head);

}