#include<iostream>
#include<queue>
using namespace std;
int main(){
    // we use front in this not top.
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.emplace(7);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    queue<int> q1;
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.emplace(7);

    // Printing Stack 2.
    queue<int> q2;
    q2.swap(q1);
    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;

    // Printing First stack.
    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}