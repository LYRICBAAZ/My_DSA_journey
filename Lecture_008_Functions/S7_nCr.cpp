#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    return (factorial(n)/(factorial(n-r)*factorial(r)));
}
int main(){
    int n,r;
    cout << "Enter the numbers: ";
    cin >> n >> r;
    if(r>n || n<0 || r<0){
        cout << "Undefined behavior!!"<<endl;
        return 0;
    }
    cout << "The value of nCr is: "<< nCr(n,r);
    return 0;
}