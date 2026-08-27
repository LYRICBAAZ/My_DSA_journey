#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={1,2,3};
    cout<<"Size of list is: "<<l1.size()<<endl;
    cout << l1.front() << endl; // direct access.
    // cout << *(l1.begin()+2);   
    // cout << l1[2];
    // random access posible nhi hai.
    // Only direct access posible hai.
    //  auto = list<int>::iterator
    auto it = ++l1.begin();
    it++;
    // it++;
    cout << *it;
}