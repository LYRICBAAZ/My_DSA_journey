#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }

    int total = 0;
    unordered_map<int, bool> m;

    for(int i = 0; i < nums.size(); i++){
        m[nums[i]] = false;
    }

    for(int i = 0; i < nums.size(); i++){

        if(m[nums[i]] == true){
            continue;
        }

        int count = 0;
        int value = nums[i];

        // Forward
        while(m.find(value) != m.end() && m[value] == false){
            m[value] = true;
            count++;
            value++;
        }

        // Backward
        value = nums[i] - 1;

        while(m.find(value) != m.end() && m[value] == false){
            m[value] = true;
            count++;
            value--;
        }

        total = max(total, count);
    }

    return total;
}

int main(){
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};

    int ans = longestConsecutive(nums);

    cout << "ANSWER IS: " << ans << endl;

    return 0;
}