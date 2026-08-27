#include<iostream>
using namespace std;
int main(){
    int i=5;
    int j = 7;
    int* ptr = &i;
    *ptr = j;
    cout << *ptr <<"  "<< i << "  "<< j << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(j) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    return 0; 

}