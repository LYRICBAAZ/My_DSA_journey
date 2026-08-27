#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1 = {1,2,3};
    list<int>l2 = {66,77,99};
    auto itr = l2.begin();
    itr++;
    l2.insert(itr,l1.begin(),l1.end());
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;

    auto it = l2.begin();
    it++;
    l2.insert(it,{0,0,0});
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;

    // (Position,Range Of start,Range of end)
}