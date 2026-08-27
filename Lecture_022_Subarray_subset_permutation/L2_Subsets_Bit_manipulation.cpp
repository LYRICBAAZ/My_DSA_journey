#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subset(vector<int> v ){
    vector<vector<int>> ans;
    
    int total = 1<<v.size();
    for(int i =0;i<total;i++){
        vector<int> output;
        for(int j=0;j<v.size();j++){
            if(i&(1<<j)){    // i ke andar j wali bit 1 hai ya nahi?
                output.push_back(v[j]);
            }
        }
        ans.push_back(output);
    }
    return ans;
}
int main(){
    vector<int> v ={1,2,3};

    vector<vector<int>> ans = subset(v);

    for(auto sub:ans){
        for(auto val:sub){
            cout << val <<" ";
        }
        cout<< endl;
    }
}