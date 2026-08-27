#include<iostream>
using namespace std;
int main(){
    int arr[3][4];

    // Input taking in 2D Array; 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    // Printing the 2D Array;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}

// 2D array ke case me column size dena necessary hota hai, kyunki C++ ko calculate karna hota hai ki next row memory me kahan se start hogi.