#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout << arr << endl; // Add of first ele
    cout << &arr[0] << endl;// Add of first ele

    cout << &arr << endl; // pure array ka address hai
    
    // size me clear ho jayega ki kaise & arr different hai
    cout << sizeof(arr) << endl; // whole array.
    cout << sizeof(&arr[0]) << endl;
    cout << sizeof(&arr) << endl;
}
