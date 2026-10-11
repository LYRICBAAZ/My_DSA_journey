#include <bits/stdc++.h>
using namespace std;

/*
Finds the median after putting both arrays
into one combined sorted order.
*/
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // This stores all values from both arrays in one place.
    vector<int> merged;
    for (int value : nums1) {
        merged.push_back(value);
    }
    for (int value : nums2) {
        merged.push_back(value);
    }
    // Sorting creates the final order needed for median calculation.
    sort(merged.begin(), merged.end());
    // This is the total number of values after both arrays are combined.
    int total = merged.size();
    // If total is odd, there is one exact middle element.
    if (total % 2 == 1) {
        return merged[total / 2];
    } else {
        // If total is even, the median is the average
        // of the two middle elements.
        return ((double)merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    }
}

// Driver code starts
int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}