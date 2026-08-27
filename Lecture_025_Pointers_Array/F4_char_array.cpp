#include<iostream>
using namespace std;
int main(){
    char str[]="Hello";
    cout << str << endl;
    cout << (void*)str << endl;
    cout << &str << endl; // Add of whole array.
    cout << &str[0] << endl;
    cout << str[1] << endl;
    char* p=str;
    cout<<*p << endl;
    cout << p << endl; // Don't print the address print whole char array. 

    // char array me address print krne me dikkat aati hai whole array print ho jata hai.

}
