#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=s.top();
        s.pop();
    }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};

    for(int x:arr){
        cout <<x<<" ";
    }
    cout <<endl;

    reverseArray(arr,8);
    
    for(int x:arr){
        cout <<x<<" ";
    }
}