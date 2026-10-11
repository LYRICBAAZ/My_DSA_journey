#include <bits/stdc++.h>
using namespace std;

/*
Finds the median by binary searching the partition
between the left half and the right half.
*/
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // Binary search should run on the smaller array.
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }
    int n = nums1.size();
    int m = nums2.size();
    // This is how many elements must stay in the left half.
    int leftSize = (n + m + 1) / 2;
    int low = 0;
    int high = n;
    while (low <= high) {
        // cut1 means how many elements are taken from nums1.
        int cut1 = low + (high - low) / 2;
        // cut2 fills the remaining left-half positions from nums2.
        int cut2 = leftSize - cut1;
        // If cut1 is at the start, nums1 has no left value.
        int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
        // If cut1 is at the end, nums1 has no right value.
        int right1 = (cut1 == n) ? INT_MAX : nums1[cut1];
        // If cut2 is at the start, nums2 has no left value.
        int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
        // If cut2 is at the end, nums2 has no right value.
        int right2 = (cut2 == m) ? INT_MAX : nums2[cut2];
        // This condition means all left values are small enough.
        if (left1 <= right2 && left2 <= right1) {
            // If total length is odd, the median is the larger
            // value from the left side.
            if ((n + m) % 2 == 1) {
                return max(left1, left2);
            } else {
                // If total length is even, average the two
                // values around the middle cut.
                return (
                    (double)max(left1, left2) +
                    min(right1, right2)
                ) / 2.0;
            }
        } else if (left1 > right2) {
            // Too many elements were taken from nums1,
            // so move its cut toward the left.
            high = cut1 - 1;
        } else {
            // Too few elements were taken from nums1,
            // so move its cut toward the right.
            low = cut1 + 1;
        }
    }
    return 0.0;
}

// Driver code starts
int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}