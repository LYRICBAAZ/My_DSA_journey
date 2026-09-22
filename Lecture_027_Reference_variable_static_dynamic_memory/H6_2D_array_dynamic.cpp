#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Row size of array: ";
    cin>>n;
    int m;
    cout <<"Enter the Col size of array: ";
    cin>>m;

    int **ptr = new int*[n];
    for(int i=0;i<n;i++){
        ptr[i]=new int[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ptr[i][j]=i+j;
            cout << ptr[i][j] <<" ";
        }
        cout << endl;
    }
}