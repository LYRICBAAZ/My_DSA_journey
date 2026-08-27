#include<iostream>
#include<vector>
using namespace std;
void solve(string str,string map[],vector<string> &ans,string output,int index){
    // Base case
    if(index >= str.size()){
        ans.push_back(output);
        return;
    }

    int digit=str[index]-'0';
    string value = map[digit];

    for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(str,map,ans,output,index+1);
        output.pop_back();
    }
}
int main(){
    string str ={"23"};
    vector<string> ans;
    string output ="";
    int index = 0;
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(str,map,ans,output,index);

    for(auto str:ans){
        for(auto val:str){
            cout << val;
        }
        cout << " ";
    }
    return 0;
}