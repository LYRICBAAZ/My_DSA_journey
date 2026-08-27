#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>arr={1,2,3,4};

    // cout << arr;  error dega address nhi.

    cout << arr.data() << endl;
    cout << &arr[0] << endl;

    // Accessing
    cout << arr[2] << endl;
    cout << arr.at(3) << endl;

    // empty and first & last element;
    cout << arr.empty() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    return 0;
}