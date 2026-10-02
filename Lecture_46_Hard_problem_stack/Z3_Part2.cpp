#include<bits/stdc++.h>
using namespace std;
vector<int> maxOfMins(vector<int>& arr) {
    //  code here
    vector<int>ans(arr.size(),0);
    
    for(int i=0;i<arr.size();i++){
        int mini = INT_MAX;
        for(int j=i;j<arr.size();j++){
            mini = min(mini,arr[j]);
            ans[j-i]=max(ans[j-i],mini);
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {10,20,15,50,10,70,30};
    
    vector<int>v=maxOfMins(arr);
    for(int x:v){
        cout << x << " ";
    }
   
    return 0;
}