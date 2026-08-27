#include<iostream>
using namespace std;
int fibonacci(int n){
    int a = 0;
    int b = 1;
    int sum = 0;
    int fibSum = 0;
    cout << "Printing the Fibonacci Series: ";
    cout << a << " " << b <<" ";
    for(int i=1;i<(n-1);i++){
        sum = (a+b);
        fibSum += sum; 
        cout << sum << " "; 
        a = b;
        b = sum;
    }
    cout << endl << "Printing Done!!!" << endl;
    return (fibSum+1);
}
int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    int sum = fibonacci(n);
    cout << "Summation of n terms of Fibonacci Series is: " << sum;
    return 0;

}