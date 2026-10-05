#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    vector<int> v(26, 0);
    queue<char> q;
    string ans;

    for(int i = 0; i < s.size(); i++){
        v[s[i] - 'a']++;
        if(v[s[i] - 'a'] == 1){
            q.push(s[i]);
        }
        while(!q.empty() && v[q.front() - 'a'] > 1){
            q.pop();
        }
        if(q.empty())
            ans.push_back('#');
        else
            ans.push_back(q.front());
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