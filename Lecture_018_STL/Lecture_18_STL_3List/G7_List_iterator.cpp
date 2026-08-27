#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1 = {1,2,3,4,5,6,7,8,9};

    // Forword Printing;
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++){
        cout << *it << " ";
    }
    cout << endl;
     
    // BackWord Printing;
    list<int>::reverse_iterator itr;
    for(itr=l1.rbegin();itr!=l1.rend();itr++){
        cout << *itr << " ";
    }
    cout << endl;
}