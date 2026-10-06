#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class Deque{
    Node* front;
    Node* rear;
    public:
    Deque(){
        front=rear=NULL;
    }
    // Push Front
    void Push_front(int x){
        if(front==NULL){
            front=rear=new Node(x);
            cout <<"Pushed in front: " << front->data <<endl;
            return;
        }
        else{
            Node* temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front =temp;
            cout <<"Pushed in front: " << front->data <<endl;
            return;
        }
    }

    // Push back
    void Push_back(int x){
        if(front==NULL){
            front = rear = new Node(x);
            cout <<"Pushed in rear: " << rear->data <<endl;
            return;
        }
        else{
            Node* temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout <<"Pushed in rear: " << rear->data <<endl;
            return;
        }
    }

    // Pop_Front
    void Pop_front(){
        if(front==NULL){
            cout <<"Deque underflow: "<< endl;
            return;
        }
        else{
            Node*temp = front;
            front = front->next;
            cout <<"Pop in Front: " << temp->data <<endl;
            delete temp;
            if(front){
                front->prev=NULL;
            }
            else{
                rear = NULL;
            }
        }
    }

    //Pop_back
    void Pop_back(){
        if(front==NULL){
            cout <<"Deque unnderflow: "<< endl;
            return;
        }
        else{
            Node* temp = rear;
            rear = rear->prev;
            cout <<"Pop in back: " << temp->data <<endl;
            delete temp;
            if(rear){
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }
    }

    // Start
    int Start(){
        if(front==NULL){
            cout << "Deque underflow: "<< endl;
            return -1;
        }
        else{
            cout <<"Element in Front: " << front->data <<endl;
            return front->data;
        }
    }

    // End
    int End(){
        if(rear==NULL){
            cout << "Deque underflow: "<< endl;
            return -1;
        }
        else{
            cout <<"Element in Front: " << rear->data <<endl;
            return rear->data;
        }
    }
};
int main(){
    Deque d;
    d.Pop_back();
    d.Pop_back();
    d.Push_back(4);
    d.Push_back(10);
    d.Push_front(9);
    d.Pop_front();
    d.Start();
    d.End();

    return 0;
}