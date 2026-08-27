#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout << &num <<"  "<< num << endl;
    int *ptr;    // Bad Practice
    cout << ptr <<"  " << *ptr << endl;

    // Null Pointer

    int* p =0;
    cout << p << endl;
    cout << *p << endl; // segmented fault bcz p null pointer hai esme kuch bhi nhi jo print ho 
    // Program crash hone se last wala nhi chalega...

    cout << "hello";   // Ye nhi chalega..
}