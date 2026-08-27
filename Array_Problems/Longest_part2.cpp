#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v){
    sort(v.begin(),v.end());

    
    int count = 1;
    int maxi = 1;
    for(int i=0;i+1<v.size();i++){
        if((v[i]+1) == v[i+1]){
            count++;
            maxi = max(maxi,count);
        }
        else if(v[i]==v[i+1]){
            continue;
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