#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout << &num <<"  "<< num << endl;
    int *ptr = &num;
    cout << ptr << "  "<< *ptr << endl;
    cout << &ptr <<"  "<< &*ptr << endl;
    cout << *&num << endl;

    // int *ptr;   Never do this mistake.

    //  char pointer
    char ch = 'a';
    char *p = &ch;
    cout << *p << endl;
    // *p++;   Address update
    (*p)++;   // value update
    cout << *p << endl;
}