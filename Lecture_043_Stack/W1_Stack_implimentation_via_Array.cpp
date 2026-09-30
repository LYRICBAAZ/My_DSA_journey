#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;

    public:
    // Constructor
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
    // push operation
    void push(int data){
        if(top == size-1){
            cout <<"Stack overflow: " << endl;
            return; 
        }
        else{
            top++;
            arr[top]=data;
            cout << "Data "<<arr[top]<<" pushed into the stack: "<< endl;
        }
    }
    // Pop operation
    void pop(){
        if(top == -1){
            cout << "Stack underflow: "<< endl;
        }
        else{
            cout <<"Popped "<<arr[top]<<" from the stack\n";
            top--;
        }
    }
    // Peek operation
    int peek(){
        if(top==-1){
            cout <<"Stack is empty: "<< endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    // IsEmpty
    bool IsEmpty(){
        return top==-1;
    }
    // IsSize
    int IsSize(){
        return top+1;
    }
};
int main(){
    Stack s(5);
    s.push(5);
    s.push(8); 
    s.pop();
    cout << s.peek() << endl;
    cout << s.IsEmpty() << endl;
    cout << s.IsSize() << endl;

    return 0;
}