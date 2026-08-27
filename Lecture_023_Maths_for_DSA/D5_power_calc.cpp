#include<iostream>
using namespace std;

long long fastExpo(long long a, long long b){
    long long ans = 1;

    while(b > 0){
        // agar b odd hai
        if(b & 1){
            ans = ans * a;
        }
        a = a * a;   // base square
        b = b >> 1;  // b = b/2
    }
    return ans;
}

int main(){
    long long a,b;
    cout << "Enter the numbers: ";
    cin >> a >> b;

    cout << fastExpo(a,b);
}