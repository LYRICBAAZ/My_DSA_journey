#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={1,2,3,4,5,6,7,8,9};
    cout<<"Size of list is: "<<l1.size()<<endl;
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;
    l1.erase(l1.begin());
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;
    auto it =l1.begin();
    it++;
    it++;
    l1.erase(it);
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;

    // delete all
    l1.erase(l1.begin(),l1.end());
    for(int val:l1){
        cout << val << " ";
    }
    cout <<l1.empty()<< endl;
    cout <<"Lagta hai nalla hai sorry null spelling  mistake!!" << endl;

    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;
    l1.clear();
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;
    cout << l1.empty();
}