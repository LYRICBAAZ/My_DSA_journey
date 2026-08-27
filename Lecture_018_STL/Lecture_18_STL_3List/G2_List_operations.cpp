#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={1,2,3};
   l1.push_back(9);
   l1.push_back(8);
//    Since it is doubly link list that's why we can use operations on both side!!
    l1.push_front(6);
    l1.push_front(6);
    for(int val:l1){
        cout << val <<" ";
    }
    cout << endl;
    l1.emplace_back(0);
    l1.emplace_back(0);
    l1.emplace_front(11);
    for(int val:l1){
        cout << val <<" ";
    }
    cout << endl;
    l1.pop_back();
    l1.pop_front();
    for(int val:l1){
        cout << val <<" ";
    }
    cout << endl;


    return 0;
}