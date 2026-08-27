#include<iostream>
using namespace std;
int OddEven(int n){
    if(n&1){
        cout << "Number is Odd:";
        return 0;
    }
    cout << "Number is Even:";
    return 0;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    OddEven(n);
    return 0;
}