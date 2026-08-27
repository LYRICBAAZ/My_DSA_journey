#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    int multiplier = 1;
    while(n != 0){
        int bit = (n%2);
        sum = (bit*multiplier)+sum;
        multiplier *= 10;
        n = n >> 1;
    }
    cout << "Binary representation of the number is: " << sum;
    return 0;
}