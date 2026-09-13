#include<bits/stdc++.h>
using namespace std;
void solve(int n,string source,string helper,string dest){
    // Base Case
    if(n==1){
        cout << " Move disc " << n << " from " << source << " To " << dest << endl;
        return;
    }

    // Recursive Call
    solve(n-1,source,dest,helper);
    cout << " Move disc " << n << " from " << source << " To " << dest << endl;
    solve(n-1,helper,source,dest);
}
int main(){
    int n;
    cin >> n;

    string source = "First Pillar";
    string helper = "Second Pillar";
    string dest = "Third Pillar";
    solve(n,source,helper,dest);
    return 0;

}