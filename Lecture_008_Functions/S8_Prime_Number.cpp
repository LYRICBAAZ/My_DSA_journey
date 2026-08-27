#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >>n;
    if(n<2){
        cout << "Not Prime Number" << endl;
        return 0;
    }
    else if(isPrime(n)){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not Prime Number" << endl;
    }
    return 0;
}