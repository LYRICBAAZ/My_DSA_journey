#include<bits/stdc++.h>
using namespace std;
vector<int> maxOfMins(vector<int>& arr) {
    //  code here
    vector<int>ans(arr.size(),0);
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i;j++){
            int mini = INT_MAX;
            for(int k=j;k<j+i+1;k++){
                mini = min(mini,arr[k]);
            }
            ans[i]=max(ans[i],mini);
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