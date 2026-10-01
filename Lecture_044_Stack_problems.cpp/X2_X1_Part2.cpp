#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],stack<int>&s,int n,int i){
    if(i==n){
        return;
    }

    s.push(arr[i]);
    reverseArray(arr,s,n,i+1);
    arr[n-i-1]=s.top();
    s.pop();
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    stack<int>s;
    for(int x:arr){
        cout <<x<<" ";
    }
    cout <<endl;

    reverseArray(arr,s,8,0);
    
    for(int x:arr){
        cout <<x<<" ";
    }
}