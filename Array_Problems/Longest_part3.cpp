#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v){
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]=false;
    }

    int maxi = 1;

    for(int i=0;i<v.size();i++){
        int count = 1;
        int next = v[i]+1;
        while(m.find(next) != m.end() && m.at(next)==false){
            count++;
            m[next] = true;
            next++;
        }

        int prev = v[i]-1;
        while(m.find(prev) != m.end() && m.at(prev)==false){
            count++;
            m[prev] = true;
            prev--;
        }

        maxi = max(count,maxi);
    }

    return maxi;
}
int main(){
    vector<int> v = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};  
    cout << solve(v);
    return 0;
}

// while(m.find(x) != m.end() && m[x]==false)  safe hai due to short circuit 0 && ki wajah se aagey ka execution nhi hota bcz 0 hi ayega..