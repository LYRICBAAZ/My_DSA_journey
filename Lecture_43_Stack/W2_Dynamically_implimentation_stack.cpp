#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next  =NULL;
    }
};
class Stack{
    Node* top;
    int size;
    public:
    // Constructor
    Stack(){
        top = NULL;
        size = 0;
    }
    // Push operation
    void push(int data){
        Node* temp = new Node(data);
        if(temp == NULL){
            cout << "Stack Overflow: "<< endl;
            return;
        }
        temp->next = top;
        top = temp;
        cout <<"Data "<<top->data <<" pushed into stack: "<< endl;
        size++;
    }
    // Pop operation
    void pop(){
        if(top==NULL){
            cout << "Stack underflow: "<< endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout <<"Popped "<<temp->data<<" from the stack: "<< endl;
        delete temp;
        size--;
    }
    // Peek Operation
    int peek(){
        if(top==NULL){
            cout <<"Stack is empty: " << endl;
            return -1;
        }
        return top->data;
    }
    //IsEmpty
    bool IsEmpty(){
        return top==NULL;
    }
    //IsSize
    int IsSize(){
        return size;
    }
};
int main(){
    Stack S;
    S.push(6);
    S.push(16);
    S.push(36);
    S.push(46);
    S.pop();
    cout <<S.IsEmpty()<<endl;
    cout << S.IsSize()<< endl;

}