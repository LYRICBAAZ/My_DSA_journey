#include<bits/stdc++.h>
using namespace std;
int minKBitFlips(vector<int>& nums, int k) {

    int n = nums.size();
    vector<int> endFlip(n + 1, 0);

    int activeFlip = 0;
    int answer = 0;

    for (int i = 0; i < n; i++) {
        activeFlip ^= endFlip[i];
        if (nums[i] == activeFlip) {
            if (i + k > n)
                return -1;
            answer++;
            activeFlip ^= 1;
            endFlip[i + k] ^= 1;
        }
    }
    return answer;
}
int main(){
    vector<int>v={0,0,0,1,0,1,1,0};
    int k = 3;

    cout << minKBitFlips(v,k);

    return 0;
}