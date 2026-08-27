#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};

    vector<vector<int>> ans;
    ans.push_back({});

    for(int i=0;i<4;i++){
        int size = ans.size(); 

        for(int j=0;j<size;j++){
            vector<int> temp = ans[j];
            temp.push_back(arr[i]);
            ans.push_back(temp);
        }
    }
    for(auto subset : ans) {
        for(int x : subset) {
            cout << x << " ";
        }
        cout << endl;
    }
}


// int size = ans.size();  so that jitna elemnt hai ans me utne tk hi copy ho.
    
/*

| Approach                     | Time Complexity | Space Complexity |
| ---------------------------- | --------------: | ---------------: |
| **Recursive / Backtracking** |      O(n × 2ⁿ)  |       O(n × 2ⁿ) |
| **Bit Manipulation**         |      O(n × 2ⁿ)  |       O(n × 2ⁿ) |
| **Iterative**                |      O(n × 2ⁿ)  |       O(n × 2ⁿ) |

*/