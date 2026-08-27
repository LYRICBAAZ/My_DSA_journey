#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, vector<vector<int>>& ans,
           vector<int>& temp, vector<int>& visited) {

    // Base Case
    if (temp.size() == nums.size()) {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {

        if (visited[i] == 0) {

            temp.push_back(nums[i]);
            visited[i] = 1;

            solve(nums, ans, temp, visited);

            temp.pop_back();
            visited[i] = 0;
        }
    }
}

int main() {

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> visited(nums.size(), 0);

    solve(nums, ans, temp, visited);

    // Print answer
    for (auto v : ans) {
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}