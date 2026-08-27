#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int& j = i;   // j and i are allocated in same memory..
    cout << i << endl;
    cout << j << endl;
    i++;
    j++;
    cout << i << "  " << j << endl;
}