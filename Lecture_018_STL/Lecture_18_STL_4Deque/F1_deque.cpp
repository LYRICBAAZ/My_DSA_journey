#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq={1,2,3,4,5,6};
    cout << dq[5] << endl;
    for(int val:dq){
        cout << val <<" ";
    }
    cout << endl;
}