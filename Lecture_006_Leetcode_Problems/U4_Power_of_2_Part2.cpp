#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int power = 1;
    for(int i=0;i<=30;i++){
        if(n==power){
            cout << "Number is Power of 2";
            return true;
        }
        if (power <= INT_MAX/2){
            power *=2 ;
        }
    }
    cout << "Number is not Power of 2";
    return false;
}
// if ki condition jaruri hai remember it.