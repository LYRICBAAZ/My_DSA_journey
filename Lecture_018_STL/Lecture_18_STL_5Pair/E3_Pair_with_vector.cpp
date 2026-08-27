#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6},{7,8}};
    vec.push_back({11,22});
    vec.emplace_back(99,88);
    for(auto val:vec){
        cout << val.first << " " << val.second;
        cout << endl;
    }
    //  auto = pair<int,int>
}