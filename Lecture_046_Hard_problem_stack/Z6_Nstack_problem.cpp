#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int index;
    Node* next;
    Node(int val){
        index = val;
        next = nullptr;
    }
};
class Nstack{
    public:
    int *arr;
    Node** top;   // pointing Array contain Node* 
    stack<int>st;

    // Constructor call
    Nstack(int N,int s){
        arr = new int[s];
        top = new Node*[N];
        for(int i=0;i<N;i++){
            top[i]=nullptr;
        }
        for(int i=0;i<s;i++){
            st.push(i);
        }
    }

    // Push Operation....
    bool push(int N,int val){
        if(st.empty()){
            cout <<"Array is full: "<< endl;
            return false;
        }
        arr[st.top()] = val;
        Node* temp = new Node(st.top());
        temp->next = top[N-1];
        top[N-1] = temp;
        cout << "Pushed "<<val<<" successfully in stack: "<<N<< endl;
        st.pop();
        return true;
    }

    // Pop Operation....
    int pop(int N){
        if(top[N-1]==nullptr){
            cout <<"Stack is empty: "<< endl;
            return -1;
        }
        Node* temp = top[N-1];
        int i = temp->index;
        st.push(i);
        top[N-1] = temp->next;
        delete temp;
        return arr[i];
    }

};
int main(){
    int stacks;
    cin >> stacks;
    int Arraysize;
    cin >> Arraysize;
    Nstack* ans = new Nstack(stacks,Arraysize);
    ans->push(4,15);
}


// Input  is s size array me N stack impliment karo
// Node** top; top is a pointer jo Node* value ko point kr rha hai;
// when we want creat a Node* type array in other word a pointer typ array then if we want to point that array we need a double pointer array....