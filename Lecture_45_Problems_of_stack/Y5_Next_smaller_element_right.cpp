#include<bits/stdc++.h>
using namespace std;
void NGE(int arr[],int ans[],int n,int i){
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[i]<arr[s.top()]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=arr[s.top()];
        }
        s.push(i);
    }
}
int main(){
    int arr[]={6, 8, 0, 1, 3, 2, 5, 4, 10, 7};
    int ans[10];
    fill(ans,ans+10,-1);

    NGE(arr,ans,10,0);

    for(int x:ans){
        cout << x << " ";
    }

    return 0;
}