#include <iostream>
using namespace std;

int main() {
    int arr[]= {1,0,2,2,0,1,1,2,0,1};

    int n = sizeof(arr) / sizeof(arr[0]);

    int zero = 0, one = 0, two = 0;

    // Count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else
            two++;
    }

    // Fill the array with 0s
    int index = 0;

    while (zero > 0) {
        arr[index] = 0;
        index++;
        zero--;
    }

    // Fill the array with 1s
    while (one > 0) {
        arr[index] = 1;
        index++;
        one--;
    }

    // Fill the array with 2s
    while (two > 0) {
        arr[index] = 2;
        index++;
        two--;
    }

    // Print the sorted array
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}