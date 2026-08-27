#include<iostream>
using namespace std;
int main(){
    int arr[3] = {10,20,30};
    int* p = arr;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    cout << arr[2] << endl;
    cout << *(arr+2) <<endl;
    cout << 2[arr] <<endl;
}
