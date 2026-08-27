#include<iostream>
#include<vector>
using namespace std;

void solve(string str,vector<string> &ans,string output,int i){
    //Base Case
    if(i>=str.length()){
        ans.push_back(output);
        return;
    }

    // Recursion for Exclude
    solve(str,ans,output,i+1);

    // Recursion for Include
    output.push_back(str[i]);
    solve(str,ans,output,i+1);

}

vector<string> sequence(string str){

    vector<string> ans;
    string output="";
    int i = 0;
    solve(str,ans,output,i);
    return ans;
    

} 
int main(){
    string str ="abc";
    vector<string> v = sequence(str);

    for(auto val:str){
        cout << val <<" ";
    }
    cout << endl;

    for(auto val:v){
        cout << val <<" ";
    }
    return 0;
}