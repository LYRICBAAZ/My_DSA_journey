#include<iostream>
using namespace std;
int main(){
    int* ptr = new int; 
/*

                Heap
            +---------+
            |   ???   |   ← int ke liye memory
            +---------+
                ↑
                |
               ptr

               new int; return the address of the heap memory..
*/
    cout << ptr <<"  "<< *ptr << endl;
    *ptr = 10;
    cout << ptr <<"  "<< *ptr << endl;
    delete ptr;
    ptr = NULL;

    // int* ptr = new int;  heap initialize nhi hai. Contain garbage value.
    // int* ptr = new int();  heap 0 se initialize hai.
    // int* ptr = new int(10); heap initialize with 10.
}