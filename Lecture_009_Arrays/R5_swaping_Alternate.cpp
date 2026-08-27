#include<iostream>
using namespace std;
int swapAlt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    return 0;
}
void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
}
int main(){
    int arr[10]={4,6,5,7,9,8,12,3,4,16};
    swapAlt(arr,10);
    Print(arr,10);
    return 0;
}