#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size()==0){
        return 0;
    }
    int count =1;
    int maxi =0;
    sort(nums.begin(),nums.end());
    for(int i=0;i+1<nums.size();i++){
        if(nums[i]==nums[i+1]){
            continue;
        }
        if(nums[i]+1==nums[i+1]){
            count++;
        }
        else{
            maxi =max(count,maxi);
            count =1;
        }
    }
    maxi = max(count,maxi);
    return maxi;
}

int main(){
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};

    int ans = longestConsecutive(nums);

    cout << "ANSWER IS: " << ans << endl;

    return 0;
}