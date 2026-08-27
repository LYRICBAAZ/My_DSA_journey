#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &v,vector<vector<int>> &ans,vector<int> &temp,vector<int> &visited){
    // Base case 
    if(temp.size()== v.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<v.size();i++){
        if(visited[i]==0){
            temp.push_back(v[i]);
            visited[i]=1;
            solve(v,ans,temp,visited);
            temp.pop_back();
            visited[i]=0;
        }
    }

}
int main(){
    vector<int> v ={1,2,3,4};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> visited(v.size(),0);
    solve(v,ans,temp,visited);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}