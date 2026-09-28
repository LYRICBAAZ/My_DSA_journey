#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(45);
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}