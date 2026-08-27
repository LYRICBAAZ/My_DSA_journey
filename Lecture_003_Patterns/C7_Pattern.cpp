#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 1;
    int i = 0;
    while(i<n){
        int j = 0;
        while(j<=i){
            cout << count <<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}