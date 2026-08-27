#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(7);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    stack<int> st1;
    st1.push(4);
    st1.push(5);
    st1.push(6);
    st1.emplace(7);

    // Printing Stack 2.
    stack<int> st2;
    st2.swap(st1);
    while(!st2.empty()){
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;

    // Printing First stack.
    while(!st1.empty()){
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;
}