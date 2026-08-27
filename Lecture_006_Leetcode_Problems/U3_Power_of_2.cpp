#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int power;
    for(int i=0;i<=30;i++){
        power = pow(2,i);
        if(n==power){
            cout << "Number is Power of 2";
            return true;
        }
    }
    cout << "Number is not Power of 2";
    return false;
}