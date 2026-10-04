#include<bits/stdc++.h>
using namespace std;
void removeSmaller(stack<int>&s,int arr[],int n){
    if(s.empty() || arr[n]>arr[s.top()]){
        return;
    }
    s.pop();
    removeSmaller(s,arr,n);
}
void NGE(int arr[],int ans[],int n,stack<int>&s){
    if(n<0){
        return;
    }

    removeSmaller(s,arr,n);

    if(!s.empty()){
        ans[n]=arr[s.top()];
    }
    s.push(n);

    NGE(arr,ans,n-1,s);

}
int main(){
    int arr[]={6, 8, 0, 1, 3, 2, 5, 4, 10, 7};
    int ans[10];
    fill(ans,ans+10,-1);

    stack<int>s;

    NGE(arr,ans,9,s);

    for(int x:ans){
        cout << x << " ";
    }

    return 0;
}