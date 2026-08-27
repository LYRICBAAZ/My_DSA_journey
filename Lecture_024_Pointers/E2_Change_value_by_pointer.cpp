#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout << &num <<"  "<< num << endl;
    int *ptr = &num;
    *ptr = 50;
    cout << num << endl;
    *ptr = *ptr + 5 ;
    cout << num << endl;
}