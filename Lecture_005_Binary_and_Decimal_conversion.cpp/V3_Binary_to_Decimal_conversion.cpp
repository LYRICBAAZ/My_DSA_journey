#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int multiplier = 1;
    int sum = 0;
    while(n != 0){
        int bit = (n%10);
        sum = (bit*multiplier)+sum;
        multiplier *=2;
        n = n/10;
    }
    cout << "Decimal representation of the number is: " << sum;
}