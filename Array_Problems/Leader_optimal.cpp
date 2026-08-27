#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 22, 12, 3, 0, 6};

    cout << arr[5] <<" ";
    int max = arr[5];
    for(int i=4;i>=0;i--){
        if(max < arr[i]){
            max = arr[i];
            cout << max <<" ";
        }
    }

}