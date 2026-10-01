#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s1;
    stack<int>s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(100);

    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }

    return 0;
}