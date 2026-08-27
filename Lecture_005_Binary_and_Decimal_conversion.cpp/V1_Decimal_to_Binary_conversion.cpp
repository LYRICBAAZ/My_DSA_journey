#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    // int i = 0;
    int multiplier = 1;
    if(n<0){
        cout << "Please Enter only Positive numbers: ";
        return 0;
    }
    while(n != 0){
        int bit = (n&1);
        // sum = (bit*pow(10,i))+sum; Double is not precise.
        sum = (bit*multiplier)+sum;
        multiplier *= 10;
        n = n >> 1;
        // i++;
    }
    cout << "Binary representation of the number is: " << sum;
}