#include<iostream>
using namespace std;
void counting(int n){
    int sum = 0;
    cout << "Printing the numbers: " << endl;
    for(int i=1;i<=n;i++){
        cout << i << endl;
        sum += i;
    }
    cout << "Printing Done!!" << endl;
    cout << "Summation of 1 to n is: " << sum << endl;
}
int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    counting(n);
    return 0;
}