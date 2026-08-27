#include <iostream>
#include <vector>
using namespace std;

void rotatedArray(vector<int>& v1, int n, int r) {
    vector<int> temp;

    for (int i = r; i < n; i++) {
        temp.push_back(v1[i]);
    }

    for (int i = 0; i < r; i++) {
        temp.push_back(v1[i]);
    }

    v1 = temp;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8};

    rotatedArray(v1, v1.size(), 4);

    for (auto val : v1) {
        cout << val << " ";
    }

    return 0;
}