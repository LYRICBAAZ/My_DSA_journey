#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return ;
    }
    // cout << n <<" ";   // Try this one once to print.

    print(n-1);

    cout << n <<" ";
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    print(n);
}