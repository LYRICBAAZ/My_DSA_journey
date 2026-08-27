#include<iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cout <<"Enter the number: ";
	cin >> n;
    int sum = 0;
    while(n != 0){
        int digit = (n%10);
        if(sum > INT_MAX/10 || (sum == INT_MAX/10 && digit > 7)){
            cout << "Overflow! Reverse not possible.";
            return 0;
        }
        if(sum < INT_MIN/10 || (sum == INT_MIN/10 && digit < -8)){
            cout << "Overflow! Reverse not possible.";
            return 0;
        }

        sum = (sum*10)+digit;
        n = n/10;
    }
    cout <<"Reverse Interger is: " << sum;
    return 0;
}

//      INT_MAX =  2147483647  → last digit = 7
//      INT_MIN = -2147483648  → last digit = -8