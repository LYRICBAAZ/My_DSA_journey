#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v){
    sort(v.begin(),v.end());

    vector<int> s;
    s.push_back(v[0]);
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            s.push_back(v[i]);
        }
    }
    int count = 1;
    int maxi = 1;
    for(int i=0;i<s.size()-1;i++){
        if((s[i]+1) == s[i+1]){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count=1;
        }
    }
    return maxi;
}
int main(){
    vector<int> v = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};  
    cout << solve(v);
    return 0;
}