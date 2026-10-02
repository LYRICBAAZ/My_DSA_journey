#include<bits/stdc++.h>
using namespace std;
vector<int> maxOfMins(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, 0);
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            int temp = s.top();
            s.pop();
            int len;
            if (s.empty()) {
                len = i;
            }
            else {
                len = i - s.top() - 1;
            }
            ans[len - 1] = max(ans[len - 1], arr[temp]);
        }
        s.push(i);
    }
    // Remaining elements
    while (!s.empty()) {
        int temp = s.top();
        s.pop();
        int len;
        if (s.empty()) {
            len = n;
        }
        else {
            len = n - s.top() - 1;
        }
        ans[len - 1] = max(ans[len - 1], arr[temp]);
    }
    // Fill smaller window sizes
    for (int i = n - 2; i >= 0; i--) {
        ans[i] = max(ans[i], ans[i + 1]);
    }
    return ans;
}
int main(){
    vector<int>arr = {10,20,15,50,10,70,30};
    
    vector<int>v=maxOfMins(arr);
    for(int x:v){
        cout << x << " ";
    }
   
    return 0;
}