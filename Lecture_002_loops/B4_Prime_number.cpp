#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: "<< endl;
    cin >> n;
    int i = 2;
    if (n<2){
        cout<<"Number is not prime.";
        return 0;    
    }
    if (n==2){
        cout<<"Number is prime.";
        return 0;
    }

    while(i<n){
        if(n%i==0){
            cout<<"Number is not prime.";
            return 0;
        }
        i++;
    }
    cout<<"PRIME NUMBER FOUND !!";
    
    return 0;
}