#include<iostream>
#include<queue>
using namespace std;
int main(){
    // we use top in this not front.
    priority_queue<int> q;
    q.push(4);
    q.push(5);
    q.push(11);
    q.emplace(7);
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

/*
priority_queue<
    Type,
    Container,
    Comparator
> Name;
*/


    // for accending order;
    priority_queue<int,vector<int>,greater<int>> q1;
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.emplace(7);
    while(!q1.empty()){
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl;

    
}