#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    int prod = 1;
    int sum = 0;
    while(n != 0){
        prod = prod*(n%10);
        sum = sum + (n%10);
        n = n/10;
    }
    cout << "Different between Product and sum of digite is: "<< (prod-sum);
    return 0;
}