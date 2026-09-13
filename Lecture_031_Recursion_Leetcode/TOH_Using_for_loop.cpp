#include <iostream>
#include <cmath>
using namespace std;

void moveDisk(char from, char to) {
    cout << "Move disk from " << from << " to " << to << endl;
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    int totalMoves = pow(2, n) - 1;

    char A = 'A', B = 'B', C = 'C';

    // If n is even, swap destination and auxiliary
    if (n % 2 == 0) {
        swap(B, C);
    }

    for (int i = 1; i <= totalMoves; i++) {

        if (i % 3 == 1) {
            moveDisk(A, C);
        }
        else if (i % 3 == 2) {
            moveDisk(A, B);
        }
        else {
            moveDisk(B, C);
        }
    }

    return 0;
}