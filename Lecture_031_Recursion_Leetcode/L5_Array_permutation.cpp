#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& v, vector<vector<int>>& ans, int index) {

    // Base case
    if (index == v.size()) {
        ans.push_back(v);
        return;
    }

    for (int i = index; i < v.size(); i++) {

        // Choose
        swap(v[index], v[i]);

        // Recursion
        solve(v, ans, index + 1);

        // Backtracking
        swap(v[index], v[i]);
    }
}

int main() {

    vector<int> v = {1, 2, 3};

    vector<vector<int>> ans;

    solve(v, ans, 0);

    // Print all permutations
    for (auto permutation : ans) {
        for (auto x : permutation) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}