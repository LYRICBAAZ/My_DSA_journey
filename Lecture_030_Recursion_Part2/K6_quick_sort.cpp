#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& nums, int s, int e) {
    int pos = s;

    for(int i = s; i <= e; i++) {
        if(nums[i] <= nums[e]) {
            swap(nums[i], nums[pos]);
            pos++;
        }
    }

    return pos - 1;
}

void quickSort(vector<int>& nums, int s, int e) {
    
    // Base case
    if(s >= e) {
        return;
    }

    // Processing
    int pivot = partition(nums, s, e);

    // Left
    quickSort(nums, s, pivot - 1);

    // Right
    quickSort(nums, pivot + 1, e);
}

int main() {
    vector<int> nums = {3,5,1,8,2,4};

    quickSort(nums, 0, nums.size()-1);

    for(auto val : nums) {
        cout << val << " ";
    }

    return 0;
}