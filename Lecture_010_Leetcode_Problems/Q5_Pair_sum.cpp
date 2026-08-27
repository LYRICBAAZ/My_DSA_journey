#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    sort(arr, arr + n);

    int left = 0;
    int right = n - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            cout << arr[left] << " " << arr[right] << endl;
            left++;
            right--;
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}