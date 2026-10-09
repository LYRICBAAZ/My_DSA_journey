#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int k) {
    int s=0;
    int e = nums.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        mid = s+(e-s)/2;
        // Element found
        if(nums[mid]==k){
            return mid;
        }
        // Left half
        else if(nums[s]<=nums[mid]){
            if(nums[s]<=k && k<nums[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        // right half
        else{
            if(nums[e]>=k && k>nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>nums={8,9,10,1,2,3,4,5,6,7};
    int key = search(nums,4);
    cout << "Key Index of the sorted rotated Array is: " << key << endl;

    return 0;
}