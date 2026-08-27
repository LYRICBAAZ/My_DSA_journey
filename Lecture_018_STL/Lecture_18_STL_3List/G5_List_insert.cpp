#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1 = {1,2,3};
    l1.insert(l1.begin(),100);
    for(int val:l1){
        cout << val <<" ";
    }
    cout << endl;
    list<int>::iterator itr = l1.begin();
    itr++;
    itr++;
    l1.insert(itr,999);
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;
}