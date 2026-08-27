#include<iostream>
using namespace std;
int arithmetic(int n){
    int AP = (3*n+7);
    int sum = 0;
    cout << "Printing the Arithmetic Progression: " << endl;
    for(int i=0;i<n;i++){
        cout << (3*i+7) << endl;
        sum += (3*i+7);
    }
    cout << "Printing Done!!!" << endl;
    cout << "Nth term of the AP is: " << ((3*(n-1))+7) << endl;
    cout << "Summation of the Nth term of the AP is: "<< sum;
    return 0;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    arithmetic(n);
    return 0;
}