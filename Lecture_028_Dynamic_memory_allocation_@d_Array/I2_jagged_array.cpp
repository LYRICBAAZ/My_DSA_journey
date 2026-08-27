#include<iostream>
using namespace std;
int main(){
    int row;
    cout <<"Enter the number of row: ";
    cin >> row;
    
    int **arr = new int*[row];

    int size[row];
    int col;
    cout << "Enter the number of column: ";
    for(int i=0; i<row; i++){
        cin >> col;
        size[i]=col;
        arr[i] = new int[col];
    }

    // Taking input
    cout <<"Enter row elements" << endl;
    for(int i=0; i<row; i++){
        for(int j=0;j<size[i];j++){
            cin >> arr[i][j];
        }
    }

    // Printing Output
    for(int i=0; i<row; i++){
        for(int j=0;j<size[i];j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    // Release memory
    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;

    return 0;
}