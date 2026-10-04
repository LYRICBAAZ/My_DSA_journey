#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int* arr;
    int n;
    // Constructor
    Queue(int s){
        arr = new int[s];
        front = -1;
        rear = -1;
        n=s;
    }
    // Empty operation
    bool IsEmpty(){
        return front==-1;
    }

    // Is full
    bool IsFull(){
        return rear==n-1;
    }

    //Push operation
    void push(int val){
        //Empty
        if(IsEmpty()){
            front=rear=0;
            arr[0]=val;
            cout <<"Pushed: "<<val<<endl;
            return;
        }
        //Full
        else if(IsFull()){
            cout <<"Queue overflow\n";
            return;
        }
        //Insert
        else{
            rear=rear+1;
            arr[rear]=val;
            cout <<"Pushed: "<<val<<endl;
            return;
        }
    }
    //Pop operation
    int pop(){
        if(IsEmpty()){
            cout <<"queue underflow\n";
        }
        else{
            if(front==rear){
                cout<<"Popped: "<<arr[front]<<endl;
                front=rear=-1;
            }
            else{
                cout<<"Popped: "<<arr[front]<<endl;
                front = front+1;
            }
        } 
    }

    // start element
    int start(){
        if(IsEmpty()){
            cout <<"Queue is empty: "<<endl;
        }
        else{
            cout <<"Start element is: "<<arr[front]<<endl;
            return arr[front];
        }
        return -1;
    }

};
int main(){
    Queue q(5);
    q.push(6);
    q.push(6);
    q.push(6);
    q.push(6);
    q.push(6);
    q.push(6);
    q.pop();
    q.pop();
    q.push(9);

}