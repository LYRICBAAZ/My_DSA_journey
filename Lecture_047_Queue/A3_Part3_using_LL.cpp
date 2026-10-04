#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Queue{
    public:
    Node*front;
    Node* rear;

    Queue(){
        front=nullptr;
        rear=nullptr;
    }
    bool IsEmpty(){
        return front==nullptr;
    }
    void push(int x){
        if(IsEmpty()){
            front = new Node(x);
            rear=front;
            return;
        }
        else{
            rear->next=new Node(x);
            if(rear->next==nullptr){
                cout <<"Queue overflow: "<< endl;
                return;
            }
            rear=rear->next;
        }
    }
    void pop(){
        if(IsEmpty()){
            cout <<"Queue underflow: "<<endl;
            return;
        }
        else{
            Node *temp = front;
            front=front->next;
            delete temp;
            return;
        }
    }
    int start(){
        if(IsEmpty()){
            cout <<"Queue is empty: "<< endl;
            return -1;
        }
        else{
            cout << front->data;
            return front->data;
        }
    }
};
int main(){
    Queue q;
    q.start();
    q.push(4);
    q.push(100);
    q.pop();
    q.start();
}