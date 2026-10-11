#include <bits/stdc++.h>
using namespace std;

/*
Finds the median by simulating the merge process
only until the middle position is reached.
*/
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    // These pointers track the next unused value in each array.
    int i = 0;
    int j = 0;
    // previous and current store the last two picked values.
    int previous = 0;
    int current = 0;
    // Only positions up to the middle can affect the median.
    int middle = (n + m) / 2;
    for (int count = 0; count <= middle; count++) {
        previous = current;
        // If both arrays still have values, choose the smaller one.
        if (i < n && j < m) {
            // nums1 is chosen when it has the smaller current value.
            if (nums1[i] <= nums2[j]) {
                current = nums1[i];
                i++;
            } else {
                // nums2 is chosen because its current value is smaller.
                current = nums2[j];
                j++;
            }
        } else if (i < n) {
            // nums2 is finished, so the next value must come from nums1.
            current = nums1[i];
            i++;
        } else {
            // nums1 is finished, so the next value must come from nums2.
            current = nums2[j];
            j++;
        }
    }
    // If total is odd, current is the exact middle value.
    if ((n + m) % 2 == 1) {
        return current;
    } else {
        // If total is even, previous and current are the two middles.
        return ((double)previous + current) / 2.0;
    }
}


// Driver code starts
int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}