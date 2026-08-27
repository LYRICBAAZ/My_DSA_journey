#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;
    int mask = 0;
    while( temp != 0){
        temp = temp >> 1;
        mask = (mask << 1)|1;
    }
    cout << "Compliment of the number is: " << (~n&mask);
    return 0;
}