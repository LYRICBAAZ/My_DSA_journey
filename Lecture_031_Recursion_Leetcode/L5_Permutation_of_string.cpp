#include<iostream>
#include<vector>
using namespace std;
void solve(string &str,vector<string> &ans,int index){
    // Base case
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }

    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        solve(str,ans,index+1);
        // Backtracking
        swap(str[index],str[i]);
    }

}
int main(){
    string str = "abc";
    vector<string> ans;
    int index = 0;
    solve(str,ans,index);

    for(auto y:ans){
        for(auto x:y){
            cout <<x;
        }
        cout << " ";
    }

    return 0;
}