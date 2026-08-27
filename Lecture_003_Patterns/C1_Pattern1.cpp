#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER : ";
    cin >> n;
    int i = 0;
    while(i<n){
        int j = 0;
        while(j<n){
            cout << j+1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}