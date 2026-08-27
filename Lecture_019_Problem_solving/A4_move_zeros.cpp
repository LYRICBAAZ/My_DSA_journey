#include<iostream>
using namespace std;
int moveZero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[7]={1,0,0,5,0,7,0};
    moveZero(arr,7);
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
}