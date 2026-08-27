#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>v1={ {2,3},{1,5},{2,1} };
    sort(v1.begin(),v1.end());
    for(auto val:v1){
        cout << val.first << " " << val.second << endl;
    }

}