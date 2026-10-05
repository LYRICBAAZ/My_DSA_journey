#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    vector<int>v(26,0);
    queue<char>q;
    for(int i=0;i<v.size();i++){
        
    }
    return ans;
}
int main(){
    string a = "abadbc";
    string b = "abcabc";
    string c = "abcacdbd"; 

    string ans1 = solve(a);
    string ans2 = solve(b);
    string ans3 = solve(c);

    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;

    return 0;
}
unordered_map<char,int>m;
    string temp;
    string ans;
    for(int i=0;i<s.size();i++){
        bool check = true;
        temp.push_back(s[i]);
        m[s[i]]++;
        for(int j=0;j<temp.size();j++){
            if(m[s[j]]<=1){
                ans.push_back(s[j]);
                check=false;
                break;
            }
        }
        if(check){
            ans.push_back('#');
        }
    }