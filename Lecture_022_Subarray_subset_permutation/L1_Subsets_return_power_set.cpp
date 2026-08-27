#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> v,vector<vector<int>> &ans,vector<int> output,int i){
    // Base Case
    if(i>=v.size()){
        ans.push_back(output);
        return;
    }

    // Recursive Calls Exclude
    solve(v,ans,output,i+1);

    // Recursive Calls Include
    output.push_back(v[i]);
    solve(v,ans,output,i+1);

}
vector<vector<int>> subSet(vector<int> &v){

    vector<vector<int>> ans;
    vector<int> output;
    int i = 0;
    solve(v,ans,output,i);
    return ans;

}
int main(){

    vector<int> v ={1,2,3};
    vector<vector<int>> vec = subSet(v);

    
    for(auto subset : vec){
        for(int x : subset){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;

}