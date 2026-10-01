// Left me kitne smaller element hai including curr.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {100,80,55,70,60,75,85};
    stack<int>s;
    vector<int> ans(arr.size(),1);

    for(int i=arr.size()-1;i>=0;i--){
        if(s.empty()){
            s.push(i);
            continue;
        }
        while(!s.empty() && arr[s.top()]<arr[i]){
            ans[s.top()]=s.top()-i;
            s.pop();
        }
        s.push(i);
    }
    for(int val:ans){
        cout <<val <<" ";
    }

    return 0;
}