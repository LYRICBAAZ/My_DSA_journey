#include<iostream>
using namespace std;
void func(int* ptr){
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;

    cout << ptr << endl;
    cout << *ptr << endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout << sizeof(arr) << endl;
    func(arr);  // func(&arr[0])
    // Whole array pass nhi hua hai..
}