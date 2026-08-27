#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1;
    list<int>l2={1,2,3,4,5};
    list<int>l3(l2);
    list<int>l4(5,-2);
    return 0;
}